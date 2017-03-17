#include "waterbender.h"
waterbender::waterbender(string nom,int salud,int def, int fuer, int lvl) : Bender( nom, salud, def,  fuer,  lvl){
	nombre=nom;
	HP=salud;
	defensa=def;
	fuerza=fuer;
	lvlsuerte=lvl;
}

void waterbender::ataque(Bender* enemy){
	
}
void waterbender::ataqueespecial(Bender* enemy){
}
