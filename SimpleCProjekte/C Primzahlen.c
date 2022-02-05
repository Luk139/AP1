#include <stdio.h>

int main () {

		const int GROESSE = 1000;
		int primzahlen [GROESSE];
		int primMax;
		int i; //Normale Zahl 1 (Später durch ++ durchgezählt 1,2,3,4...etc)
		int k; //Test multiplikator um Vielfache zu eliminieren


		//EINGABE
		printf("\nBis zur welchen Zahl < 1000 sollen alle Primzahlen ausgegeben werden: _\n");
		scanf("%i", &primMax); //Setzt die Zahl bis zu der gezählt wird

		if (primMax > 1000 || primMax <2)
			{
			printf("\nDie eingegebene Zahl ist außerhalb der erlaubten Reichweite, bitte eine Zahl unter 1000 eingeben!\n");//Fehlermeldung bei invalidem Wert
			}

		else {


		//VORVERARBEITUNG
		primzahlen[0] = 0; //setzt den ersten Wert im Array auf 0

		for ( i = 1; i < primMax; i++){
			primzahlen[i] = 1; //setzt alle Werte nach 0 im Array auf 1
		}


		//HAUPTEIL

		for ( i = 2; i < primMax; i++)/*Zählt bis zu primMax hoch also 1,2,3,4....primMax */
		{
		for ( k = 2; k * i < primMax; k++)/*solange das vielfache nicht über den primMax geht führe diese Rechnung aus*/
		{
		primzahlen[i*k] = 0;//rechnet alle Vielfachen aus, mit simpler multiplikation und setzt alle Werte im Array die ein vielfaches sind wieder auf 0
		}
	}

	//AUSGABE

		printf("\nAlle Primzahlen von 2 bis %i", primMax);

		for ( i = 0; i < primMax; i++)
		{

		if (primzahlen[i] != 0) //Wenn der Wert im Array NICHT 0 ist...(0 Kann nur bei vielfachem sein, was wir bei Primzahlen nicht wollen)
		{
			printf("\n%i", i);// ...gib den Wert aus. 
		}

        }
	}

return 0;

}
