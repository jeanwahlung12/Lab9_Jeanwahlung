# pragma once
#include "Bender.h"

class earthbender : public Bender{
public:
	earthbender(string,int,int,int,int);
	
	virtual void ataque(Bender*);
	virtual void ataqueespecial(Bender*);
	
};