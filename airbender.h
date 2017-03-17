# pragma once
#include "Bender.h"

class airbender : public Bender{
public:
	airbender(string,int,int,double,int);
	
	virtual void ataque(Bender*);
	virtual void ataqueespecial(Bender*);
	
};