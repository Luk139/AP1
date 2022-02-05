#include<stdio.h>

int main(){
	float netto, mwst, brutto;
	printf("Geben sie den Nettobetrag in EUR ein: ");
	scanf("%f",&netto);
	mwst = 0.19 * netto;
	brutto = mwst+netto;
	printf("Nettobetrag\t\t\t =\t %8.2f EUR\n",netto);
	printf("Mehrwertsteuersatz 19.00%\t =\t %8.2f EUR\n",mwst");
	printf("Bruttobetrag\t\t\t =\t %8.2f EUR\n",brutto");
	return 0;
}
