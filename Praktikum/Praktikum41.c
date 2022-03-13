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
int laenge(const char s[]){

    int i=0;
    int counter =0 ;
    while(s[i]!='\0'){
          counter++;
          i++;
        }
    return counter;
}

int main(){

    const int MAX = 1000;
    char eingabe[MAX];
    char antwort;
    char buchstabe;

    printf("Bitte Namen eingeben: ");
    scanf(" %s",eingabe);
    printf("%s hat %i Zeichen.\n",eingabe, laenge(eingabe));
    
    printf("Möchest Du nach einem Buchstaben in %s suchen (j / n)?",eingabe);
    scanf(" %c",&antwort);
    
   
    if(antwort=='j'){
        printf("Sie haben ja gewählt");
        printf("Bitte Buchstaben eingeben: ");
        scanf(" %c",&buchstabe);      
        printf("Der Buchstabe %c kommt %i mal vor.\n", buchstabe, sucheZeichen(eingabe, buchstabe));
    }
    else if(antwort=='n'){
        printf("Sie haben nein gewählt\n");
        printf("Auf Wiedersehen!\n");
    }
 
    
    
    return 0;
}