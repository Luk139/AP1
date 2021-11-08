#include<stdio.h>

int addieren(int a, int b){
	int summe;
	summe = a+b;
	return summe;
	
}
int main(){
	int x,y;
	
	printf("Berechne: x+y \n\n");
	
	printf("Bitte Wert für x eingeben: ");
	scanf("%d",&x);
	printf("Bitte Wert für y eingeben: ");
	scanf("%d",&y);
	
	printf("\n\nDie Summe von %d und %d ist %d",x,y,addieren(x,y));
	return 0;
}