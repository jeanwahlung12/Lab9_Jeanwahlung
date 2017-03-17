#pragma once
#include <iostream>
#include <string>
using namespace std;

class Bender{
private:
	string nombre;
	int HP;
	int defensa;
	int fuerza;
	int lvlsuerte;
public:
	virtual void ataque(Bender*);
	virtual void ataqueespecial(Bender*);
	
	Bender(string,int,int,int,int,int);
	~Bender();
	virtual void  setHP(int);
	virtual void setfuerza(int);
	virtual void setlvlsuerte(int);
	virtual int getHP();
	virtual int getfuerza();
	virtual int getlvlsuerte();


};
