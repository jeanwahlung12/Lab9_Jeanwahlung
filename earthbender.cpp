#include "earthbender.h"
earthbender::earthbender(string nom,int salud,int def, int fuer, int lvl) : Bender( nom, salud, def,  fuer,  lvl){
	nombre=nom;
	HP=salud;
	defensa=def;
	fuerza=fuer;
	lvlsuerte=lvl;
}

void earthbender::ataque(Bender* enemy){
	
}
void earthbender::ataqueespecial(Bender* enemy){
}
