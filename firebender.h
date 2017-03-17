# pragma once
#include "Bender.h"

class firebender : public Bender{
public:
	firebender(string,int,int,double,int);
	
	virtual void ataque(Bender*);
	virtual void ataqueespecial(Bender*);
	
};