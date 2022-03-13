#include<stdio.h>


int main(){
	
	int Jahreszahl;
	printf("Programm Schaltjahr");
	printf("\n\nBitte geben sie eine Jahreszahl ein: ");
	scanf("%i",&Jahreszahl);

	if(Jahreszahl % 4 == 0 && Jahreszahl % 100 !=0 ){
		printf("\n%d ist ein Schaltjahr",Jahreszahl);
	}
	else if(Jahreszahl % 100 == 0 && Jahreszahl % 400 != 0){
		printf("\n%d ist kein Schaltjahr",Jahreszahl);
	}
	else if(Jahreszahl % 400 == 0){
		printf("\n%d ist ein Schaltjahr",Jahreszahl);
	}




	return 0;
}