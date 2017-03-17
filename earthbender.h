# pragma once
#include "Bender.h"

class earthbender : public Bender{
public:
	earthbender(string,int,int,double,int);
	
	virtual void ataque(Bender*);
	virtual void ataqueespecial(Bender*);
	
};