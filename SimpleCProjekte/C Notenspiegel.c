#include<stdio.h>

int main(){
	int anzahl[5]; //Array für Noten
	int i, summe; //Zähler, Summe
	float durchschnitt=0, gesamtzahl =0; quote =0;
	
	for(i =0;i<=4;i++)//Gehe alle 5 Werte des Arrays 0,1,2,3,4 durch 
	{
		printf("Geben sie die Anzahl an Arbeiten mit der Note %d an ",i+1); //Weil 0 keine Note ist, i+1. sodass 1,2..5 gezählt wird
		scanf("%d",&anzahl[i]);
		gesamtzahl +=Anzahl[i]; //Überschreibe den Alten Wert der gesamtzahl mit dem Alten+den neuen Wert
		summe += Anzahl[i]*(i+1);
	}
	printf("Note\t");
	for(i=0;i<=4;i++)//Zähle bis 5 (4, weil 0 eine Zahl ist)
	{
		printf("%d\t",i+1); //Gib den Wert von i+1 an mit einem tab dazwischen -->  	1	2	3	4	5
	}
	printf("Gesamt\n");
	printf("Anzahl  ");
	for(i=0;i<=4;i++)//Zähle bis 5 (4, weil 0 eine Zahl ist)
	{
		printf("%d\t", anzahl[i]);//Gib den eingelesene Wert von i+1 an mit einem tab dazwischen 
										  //--> z.B.    7	9	5	8	9
	}
	printf("%2.0f\n",gesamtzahl);
	
	durchschnitt = summe/gesamtzahl;
	quote =100/gesamtzahl*anzahl[4];
	printf("Durchschnitt: %3.2f\n",durchschnitt);
	printf("Durchfallquote: %3.2f\n",quote);
	return 0;
}
