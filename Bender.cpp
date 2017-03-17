#include "Bender.h"



Bender::Bender(string nom,int salud,int def, int fuer, int lvl){
	nombre=nom;
	HP=salud;
	defensa=def;
	fuerza=fuer;
	lvlsuerte=lvl;
}

Bender::~Bender(){

}

void Bender:: setHP(int salud){
	HP=salud;
}

void Bender::setfuerza(int fuer){
	fuerza = fuer;
}

void Bender::setlvlsuerte(int suer){
	lvlsuerte = suer;
}

int Bender:: getHP(){
	return HP;
}

int Bender:: getfuerza(){
	return fuerza;
}

int Bender:: getlvlsuerte(){
	return lvlsuerte;
}

void Bender:: ataque(Bender* enemy){
	
}
void Bender::ataqueespecial(Bender* enemy){

}