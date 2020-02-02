a.out: blackbus.o api.o 
	gcc blackbus.o api.o 
blackbus.o: blackbus.c blackbus.h
	gcc -c blackbus.c blackbus.h
api.o: api.c blackbus.h
	gcc -c api.c blackbus.h
