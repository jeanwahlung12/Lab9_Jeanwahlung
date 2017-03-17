#pragma once
#include <iostream>
#include <string>
#include <typeinfo>
#include <stdlib.h>
#include <string>

#include <time.h>
using namespace std;

class Bender{
protected:
	string nombre;
	int HP;
	int defensa;
	double fuerza;
	int lvlsuerte;
public:
	virtual void ataque(Bender*)=0;
	virtual void ataqueespecial(Bender*)=0;
	
	Bender(string,int,int,double,int);
	virtual ~Bender();
	virtual void  setHP(int) ;
	virtual string getnombre();
	virtual void setfuerza(int);
	virtual void setlvlsuerte(int);
	virtual int getHP();
	virtual double getfuerza();
	virtual int getlvlsuerte();


};
