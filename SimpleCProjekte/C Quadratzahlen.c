#include<stdio.h>

int main(){
	int i, k, q;
	printf("Wie viele Quadratzahlen sollen berechnet werden?");
	scanf("%d",&i);
	printf("Hierd die %d Quadratzahlen:\n",i);
	
	for(k=1;k<=i;k++){
		q = k*k;
		printf("%d\n",q);
	}
return 0;
}
