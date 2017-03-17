#include "waterbender.h"
#include "earthbender.h"
waterbender::waterbender(string nom,int salud,int def, double fuer, int lvl) : Bender( nom, salud, def,  fuer,  lvl){
	nombre=nom;
	HP=salud;
	defensa=def;
	fuerza=fuer;
	lvlsuerte=lvl;
}

void waterbender::ataque(Bender* enemy){
	enemy->setHP(enemy->getHP()-fuerza);

}
void waterbender::ataqueespecial(Bender* enemy){
	srand(time(NULL));
	if(lvlsuerte>=0 && lvlsuerte<=5){
  	  
  	  int num ;
  	  num = 1 + rand() % (1000 - 1);
  	  if(num ==50){
  	  	enemy ->setHP(enemy->getHP() - (fuerza+(fuerza*0.51)));


  	  }
  	  
	}
	else if(lvlsuerte>5 && lvlsuerte<10){
		 int num ;
  	  num = 1 + rand() % (100 - 1);
  	  if(num%5==0){
  	  	enemy ->setHP(enemy->getHP() - (fuerza+(fuerza*0.5)));
  	  }
	}
	else if( lvlsuerte==10){
		 int num ;
  	  num = 1 + rand() % (10 - 1);
  	  if(num%3==0){
  	  	enemy ->setHP(enemy->getHP() - (fuerza+(fuerza*0.5)));
  	  }
	}
	else{
		enemy->setHP(enemy->getHP() - fuerza);
	}

	if(typeid(*enemy)==typeid(earthbender)){
		enemy->setHP(enemy->getHP() -(fuerza*0.25));

	}
}
