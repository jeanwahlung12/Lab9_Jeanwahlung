#include "firebender.h"
firebender::firebender(string nom,int salud,int def, int fuer, int lvl) : Bender( nom, salud, def,  fuer,  lvl){
	nombre=nom;
	HP=salud;
	defensa=def;
	fuerza=fuer;
	lvlsuerte=lvl;
}

void firebender::ataque(Bender* enemy){
	
}
void firebender::ataqueespecial(Bender* enemy){
}
