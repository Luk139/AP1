#include<stdio.h>

int main(){
	float r,d,f,u;//radius, durchmesser, Flächeninhalt, Umfang
	const float pi = 3.14;
	printf("Wie lautet der Radius vom Kreis: ");
	scanf("%f",&r);
	d = r * 2; 
	f = pi * r * r;
	u = 2 * pi * r;
	printf("Der Durchmesser beträgt/t/t%4.2f cm",d);
	printf("Der Flächeninhalt beträgt/t %4.2f cm^2",f);
	printf("Der Umfang beträgt/t/t%4.2f cm",u);
	return 0;
}