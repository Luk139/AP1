
#include <stdio.h>

// function die das Array aufsteigend sortiert
void Array_sort(int *array , int n)//Die übergabe hier ist ein array sowie die größe des Arrays
{ 
    int i=0 , j=0 , temp=0; //2 Zähler und eine Temporäre value die immer den nächst größeren Wert annimmt

    for(i=0 ; i<n ; i++) //geh so oft durch bis du die größe vom Array hast
    {
        for(j=0 ; j<n-1 ; j++) 
        {
            if(array[j]>array[j+1]) //sobald der Wert an der Stelle z.B. array[2] größer ist als an der Stelle array[3]
            {
                temp        = array[j]; //setze die temporäre variable auf den Wert in array[2]
                array[j]    = array[j+1];//überschreibe den alten wert von array[2] mit dem von array[3] sodass jetzt array[2] = array[3] ist
                array[j+1]  = temp; //und überschreibe den alten wert von array[3] mit dem von array[2]sodass jetzt array[2]<array[3] ist, also aufsteigend
				//array[2] und array[3] sind hier nur beispiele, die Zahlen können an jeder stelle größer oder kleiner sein, ich wollte es damit nur einmal durchgehen
            }
        }
    }

    printf("\nDas Array nach dem sortieren ist..\n");
    for(i=0 ; i<n ; i++)
    {
        printf("\narray_1[%d] : %d",i,array[i]);
    }
}

// function die den median berechnet
float Find_median(int array[] , int n)
{
    float median=0;
    
    // Falls die Anzahl an Zahlen gerade ist
    if(n%2 == 0)
        median = (array[(n-1)/2] + array[n/2])/2.0;
    // Falls die Anzahl an Zahlen ungerade ist
    else
        median = array[n/2];
    
    return median;
}

int main()
{
    // deklaration vom array, die 30 ist nur deko, da wir die größe noch nicht kennen, die 0 setzt alle werte aktuell auf 0, diese werden später überschrieben
    int array_1[30] = {0};
    // deklarieren von Zähler und array größe
    int i=0 ,n=0;
    float median=0; //float da hiermit geteilt wird

    printf("\nWie viele Elemente soll das Array haben : ");
    scanf("%d",&n); //überschreibe n=  mit dem neuen wert n= 'eingabe'
   
    printf("\nGib die Werte für array_1 ein\n");
    for(i=0 ; i<n ; i++) //einlesen von n elementen in das array
    {
        printf("array_1[%d] : ",i);
        scanf("%d",&array_1[i]);
    }
       
    Array_sort(array_1 , n); //aufrufen der Sortier function
       
    median = Find_median(array_1 , n); //aufrufen der Median function
    
    printf("\n\nDer median lautet : %f\n",median);
    return 0;
}