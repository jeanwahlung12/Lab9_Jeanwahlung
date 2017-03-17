#include "Bender.h"
#include "airbender.h"
#include "waterbender.h"
#include "firebender.h"
#include "earthbender.h"
#include "vector"
using namespace std;
int main(){
	vector<Bender*> benders;
	char respmenu='s';
	while(respmenu=='s'){
		char ragregar='s';
		while (ragregar=='s' || ragregar=='S'){
			int menu;
			string nombre;
			int HP;
			int defensa;
			int fuerza;
			int lvlsuerte;
			cout << " ingrese el nombre :" << endl;
			cin >> nombre;
			cout << "ingrese el HP :" << endl;
			cin >> HP;
			cout << " ingrese la defensa :" << endl;
			cin >> defensa;
			cout << "ingrese la fuerza :" << endl;
			cin >> fuerza;
			cout << " ingrese el nivel de suerte :" << endl;
			cin >> lvlsuerte;
			while(lvlsuerte>10){
				cout << "ERROR ingrese otra vez el nivel de suerte 0-10 :" << endl;
				cin >> lvlsuerte;
			}
			cout << "que desea agregar : \n 1/ airbender \n 2/waterbender \n 3/firebender \n 4/earthbender:" << endl;
			cin >> menu;
			if(menu==1){
				
				airbender* air = new airbender(nombre,HP,defensa,fuerza,lvlsuerte);
				benders.push_back(air);	
			}
			else if(menu==2){
				waterbender* water = new waterbender(nombre,HP,defensa,fuerza,lvlsuerte);
				benders.push_back(water);
			}
			else if(menu==3){
				firebender* fire = new firebender(nombre,HP,defensa,fuerza,lvlsuerte);
				benders.push_back(fire);
			}
			else if(menu==4){
				earthbender* earth = new earthbender(nombre,HP,defensa,fuerza,lvlsuerte);
				benders.push_back(earth);
			}
			cout << "desea continuar agregando (s/n) :" << endl;
			cin >> ragregar;
		}
		char respfight='s';
		while(respfight=='s' || respfight=='S'){
			for (int i = 0; i < benders.size(); ++i){
				cout << i <<")" << benders[i]->getnombre() << endl;
			}
			int pos1,pos2;

			cout << "ingrese la posicion en la que se encuentra el peleador 1 :" << endl;
			cin >> pos1;
			cout << "ingrese la posicion en la que se encuentra el peleador 2 :" << endl;
			cin >> pos2;
			cout << benders[pos1]->getHP() << endl;
			
			while(benders[pos1]->getHP() >0 && benders[pos2]->getHP()>0){
				int attack;
				cout << " ingrese el tipo de ataque jugador 1 \n 1) ataquenormal \n 2) ataqueespecial : " << endl;
				cin >> attack;
				if (attack ==1){
					benders[pos1]->ataque(benders[pos2]);
				}
				if(attack==2){
					benders[pos1]->ataqueespecial(benders[pos2]);
				}
				if(attack==3){
					cout << " a ganado el player 2 ud a escapado :" ;
					return 0;
				}
				cout << "El HP del jugador 2 es :" << benders[pos2]->getHP() << endl;
				cout << " ingrese el tipo de ataque jugador 2 \n 1) ataquenormal \n 2) ataqueespecial \n 3)run: " << endl;
				cin >> attack;
				i
				if (attack ==1){
					benders[pos2]->ataque(benders[pos1]);
				}
				if(attack==2){
					benders[pos2]->ataqueespecial(benders[pos1]);
				}
				if(attack==3){
					cout << " a ganado el player 1 ud a escapado :" ;
					return 0;
				}
				cout << " el HP del jugador 1 es : " << benders[pos1]->getHP() << endl;


			}
			cout << " desea otra pelea : (s/n) " << endl;
			cin >> respfight;
		}
		
	}//fin while menu
	return 0;
}