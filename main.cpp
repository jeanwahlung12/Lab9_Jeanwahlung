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
			cout " ingrese la defensa :" << endl;
			cin >> defensa;
			cout << "ingrese la fuerza :" << endl;
			cin >> fuerza;
			cout << " ingrese el nivel de suerte :" << endl;
			cin >> lvlsuerte;
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
				cout << i <<")" << benders[i]->getnombre();
			}
		}
		
	}//fin while menu
	return 0;
}