# Dateiname: mymathTest.mak
mymathTest: mymath.o main.o
		gcc -o mymathTest mymath.o main.o
mymath.o: mymath.h mymath.c
		gcc -c mymath.c
main.o: mymath.h main.c
		gcc -c main.c