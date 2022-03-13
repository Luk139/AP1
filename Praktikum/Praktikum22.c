#include<stdio.h>

int main(){
     int f[1000]; //Felddeklaration
     int i;
    
     for (i=1;i<1000;i++)
         f[i]=i; //Feld füllen
    
     int j=2;
     while(j<500)
     {
         for(i=2*j;i<1000;i=i+j)
            f[i]=0; 
        
         j++;
         while(f[j]==0)
             j++;
     }
    
     for(i=1;i<1000;i++)
         if(f[i])
             printf("%i\n",i);
}