#include<stdio.h>

int main(){

	int a,b;
	printf("Programm zur Berechnung des Umfanges und der Fläche von Rechtecken");
	printf("\n\nBitte geben sie die Seite a in cm ein ");
	scanf("%i", &a);
	printf("\n\nBitte geben sie die Seite b in cm ein ");
	scanf("%i", &b);
	printf("\nDie Seite a ist %i cm lang",a);
	printf("\nDie Seite b ist %i cm lang",b);
	printf("\nDer Umfange des Rechtecks beträgt %i cm",a+a+b+b);
	printf("\nDie Fläche des Rechtecks beträgt %i cm^2", a*b);

	return 0;
}