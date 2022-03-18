    #include <math.h> 
    #include <stdio.h> 
    int main(void) 
    { 
       double number = 123.54; 
       int down, up; 
       down = floor(number); 
       up = ceil(number); 
       printf("original number     %5.2lf\n", number); 
       printf("number rounded down %d\n", down); 
       printf("number rounded up   %d\n", up); 
       return 0; 
    } 