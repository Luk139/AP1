#include<stdio.h>

int main(){
	int a, f;
	printf("Geben sie die Seitenlänge des Quadrats in cm an: ");
	scanf("%d",&a);
	f = a*a;
	printf("Der Flächeninhalt beträgt %d cm",f);
	return 0;
}
