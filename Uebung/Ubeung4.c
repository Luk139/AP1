#include<stdio.h>
int sucheZeichen(const char s[], char c){
    int i=0;
    int counter =0 ;
    while(s[i]!='\0'){
        if(s[i]==c){
            counter++;
        }
        i++;
    }
    return counter;
}
int main(){

    const int MAX = 1000;
    char eingabe[MAX];
    char ran;
    int i = 0;  
    printf("Geben sie ein Wort ein: ");
    scanf(" %s",eingabe);
    printf("\n%s",eingabe);
    printf("\nWelchen Buchstaben suchen sie? ");
    fflush(stdin); 
    scanf(" %c",&ran);
    printf("\nDer Buchstabe %c kommt %d mal in %s vor",ran,sucheZeichen(eingabe,ran),eingabe);

    return 0;
}