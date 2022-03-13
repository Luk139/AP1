#include<stdio.h>

int main(){
	float brutto, netto, mwst;

	printf("Programm zum berechnen eines Bruttobetrages");

	printf("\n\nBitte geben sie den Nettobetrag in EUR ein: ");
	scanf("%f", &netto);

	mwst = netto * 0.19;
	brutto = netto + mwst;

	printf("\nNettobetrag \t\t = %f",netto);
	printf("\nMehrwertsteuersatz 19\t = %f",mwst);
	printf("\nBruttobetrag \t\t = %f",brutto);




	return 0;
}	