main:	Bender.o airbender.o waterbender.o earthbender.o firebender.o main.o
	g++ Bender.o airbender.o waterbender.o earthbender.o firebender.o main.o -o main

main.o:	main.cpp Bender.h airbender.h waterbender.h earthbender.h firebender.h
	g++ -c main.cpp 



airbender.o:	airbender.h airbender.cpp Bender.h
	g++ -c airbender.cpp

waterbender.o:	waterbender.h waterbender.cpp Bender.h
	g++ -c waterbender.cpp

firebender.o:	firebender.h firebender.cpp Bender.h
	g++ -c firebender.cpp

earthbender.o:	earthbender.h earthbender.cpp Bender.h
	g++ -c earthbender.cpp

Bender.o:	Bender.h Bender.cpp
	g++ -c Bender.cpp


