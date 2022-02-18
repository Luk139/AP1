#include<stdio.h>

int main(){
    int x,y,ergebnis;
    printf("Berechne: x + y\n");
    printf("Bitte Wert für x eingeben: ");
    scanf("%i",&x);
    printf("Bitte Wert für y eingeben: ");
    scanf("%i",&y);
    ergebnis = x+y;
    printf("Die Summe von %i und %i ist %i",x,y,ergebnis);




    return 0;
}