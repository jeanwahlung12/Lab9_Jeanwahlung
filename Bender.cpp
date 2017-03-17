#include "Bender.h"



Bender::Bender(string nom,int salud,int def, double fuer, int lvl){
	this -> nombre=nom;
	this -> HP=salud;
	this -> defensa=def;
	this -> fuerza=fuer;
	this -> lvlsuerte=lvl;
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

double Bender:: getfuerza(){
	return fuerza;
}

int Bender:: getlvlsuerte(){
	return lvlsuerte;
}
string Bender::getnombre(){
	return nombre;
}
