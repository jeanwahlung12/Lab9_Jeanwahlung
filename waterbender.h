# pragma once
#include "Bender.h"

class waterbender : public Bender{
public:
	waterbender(string,int,int,int,int);
	
	virtual void ataque(Bender*);
	virtual void ataqueespecial(Bender*);
	
};