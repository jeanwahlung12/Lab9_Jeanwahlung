#include "firebender.h"
#include "bender.h"
firebender::firebender(string nom,int salud,int def, int fuer, int lvl) : Bender( nom, salud, def,  fuer,  lvl){
	
}

void firebender::ataque(Bender* enemy){
	enemy->setHP(enemy->getHP()-fuerza);
}
void firebender::ataqueespecial(Bender* enemy){
	srand(time(NULL));
	if(lvlsuerte>=0 && lvlsuerte<=5){
  	  
  	  int num ;
  	  num = 1 + rand() % (1000 - 1);
  	  if(num ==50){
  	  	enemy ->setHP(enemy->getHP() - (fuerza+(fuerza*0.5)));


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

	if(typeid(*enemy)==typeid(waterbender)){
		enemy->setHP(enemy->getHP() -(fuerza*0.25));

	}
}
