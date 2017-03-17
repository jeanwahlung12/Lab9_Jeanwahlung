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
		while (ragregar='s'){
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

			}
			else if(menu==2){

			}
			else if(menu==3){

			}
			else if(menu==4){

			}
		}
		
	}//fin while menu
	return 0;
}