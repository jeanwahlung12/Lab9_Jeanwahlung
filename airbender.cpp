#include "airbender.h"
airbender::airbender(string nom,int salud,int def, int fuer, int lvl) : Bender( nom, salud, def,  fuer,  lvl){
	nombre=nom;
	HP=salud;
	defensa=def;
	fuerza=fuer;
	lvlsuerte=lvl;
}

void airbender::ataque(Bender* enemy){
	
}
void airbender::ataqueespecial(Bender* enemy){
}
