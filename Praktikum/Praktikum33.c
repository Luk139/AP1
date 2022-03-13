#include <stdio.h>

int main() 
{
    int num;        
    printf("Geben sie eine Zahl ein\n");
    scanf("%d",&num);    

    int count=0;         
    
    for(int i=2;i<num;i++) 
    {
        if(num%i==0)
        count++;
    }
    if(count!=0)
    {
        printf("Nein\n");
    }
    else
    {
        printf("Ja\n");
    }
    
    return 0;
}
