#include<stdio.h>
#include<stdlib.h>

typedef struct Knoten_ {
    int data;
    struct Knoten_ *next;
}Knoten;

Knoten *kopf = NULL;
int anzahl =0;

void einfuegenAmAnfang(int x){
    Knoten *t;

    t=(Knoten *)malloc(sizeof(Knoten));
    anzahl++;   

    if(kopf == NULL){
        kopf = t;
        kopf ->data = x;
        kopf ->next = NULL;
    }
    else {
        t->data = x;
        t->next = kopf;
        kopf = t;
    }
}

void einfuegenAmEnde(int x){
    Knoten *t, *temp;

    t = (Knoten*)malloc(sizeof(Knoten));
    anzahl++;

    if(kopf == NULL){
        kopf = t;
        kopf->data = x;
        kopf->next = NULL;
    }
    else{
        temp = kopf;

        while (temp->next != NULL)
            temp = temp->next;
        
        temp->next =t;
        t->data =x;
        t->next = NULL;
    }
}

void ausgeben(){
    Knoten *t;

    t = kopf;

    if (t== NULL){
        printf("Die linked ist ist leer.\n");
    }
    else{
        printf("Die Linked list hat %d Elemente.\n",anzahl);

        while(t->next != NULL){
            printf("%d ",t->data);
            t=t->next;
        }
        printf("%d\n", t->data);
    }
}

void loeschenAmAnfang(){
    Knoten *t;
    int n;

    if (kopf == NULL){
        printf("Die Linked List ist schon leer.\n");
    }
    else{
        n = kopf->data;
        t = kopf->next;
        free(kopf);
        kopf = t;
        anzahl --;
        printf("%d wurde vom Anfang geloescht.\n",n);
    }
}

void loeschenAmEnde(){
    Knoten *t, *u;
    int n;

    if(kopf == NULL){
        printf("Die Linked List ist schon leer.\n");
    }
    else{
        anzahl--;

        if (kopf->next== NULL){
            n = kopf->data;
            free(kopf);
            kopf = NULL;
            printf("%d wurde vom Ende geloescht.\n",n);
        }
        else{
            t =kopf;

            while(t->next != NULL){
                u = t;
                t=t->next;
            }
            n = t->data;
            u->next=NULL;
            free(t);
            printf("%d wurde vom Ende geloescht.\n",n);
        }
    }
}
void loescheKnoten(Knoten** head_ref, int key)
{
    
    Knoten *temp = *head_ref, *prev;
 
   
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next; 
        free(temp); 
        return;
    }
 
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
 
    
    if (temp == NULL)
        return;
 
    
    prev->next = temp->next;
 
    free(temp);
}

int main(){
    int auswahl, data;
    int weiter = 1;

    while(weiter){
        printf("\nWas wollen sie mit der Linked List tun?\n\n");
        printf("1. Einfuegen am Anfang\n");
        printf("2. Einfuegen am Ende\n");
        printf("3. Ausgabe der Linked List\n");
        printf("4. Loeschen am Anfang\n");
        printf("5. Loeschen am Ende\n");
        printf("6. Ende\n\n");
        printf("7: Knoten löschen");
        printf("Auswahl: ");
        scanf("%d", &auswahl);
        printf("\n");

        switch (auswahl){
            case 1:
                printf("Wert eingeben: ");
                scanf("%d", &data);
                einfuegenAmAnfang(data);
                break;
            case 2:
                printf("Wert eingeben: ");
                scanf("%d", &data);
                einfuegenAmEnde(data);
                break;
            case 3:
                ausgeben();
                break;
            case 4:
                loeschenAmAnfang();
                break;
            case 5:
                loeschenAmEnde();
                break;
            case 6:
                weiter = 0;
                break;
            case 7:
                printf("Welchen Knoten wollen sie löschen? "); //die funktion funktioniert, hab nur kein plan welcher übergabewert hier rein muss
                scanf("%d",&auswahl);
                loescheKnoten(auswahl);
            default:
                printf("Bitte einen sinnvollen Wert eingeben. \n");
                break;
        }
    }
    return 0;
}