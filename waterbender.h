#pragma once
#include "Bender.h"

class waterbender : public Bender{
public:
	waterbender(string,int,int,double,int);
	
	 void ataque(Bender*);
	 void ataqueespecial(Bender*);
	
};