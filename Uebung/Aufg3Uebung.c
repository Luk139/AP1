#include<stdio.h>

long faku(int n);
int main(){
    int wert;
    printf("\nBitte Wert eingeben: ");
    scanf("%i",&wert);
    printf("Die Fakultät von %i ist %li\n",wert,faku(wert));
    return 0;
}
long faku(int n){
    long erg = 1;
    printf("Aufruf für %i\n",n);
    if(n==0){
        printf("\nRücklauf beginnt");
        return 1;
    }
    else{
        erg = n * faku(n-1);
        printf("\nRücklauf Wert = %li\n", erg);
        return erg;
    }
}