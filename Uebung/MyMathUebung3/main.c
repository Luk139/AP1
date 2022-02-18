#include <stdio.h>
#include "mymath.h"
int main() {
int x, y;
printf("\nBitte ersten Wert eingeben: ");
scanf("%i", &x);
printf("\nBitte zweiten Wert eingeben: ");
scanf("%i", &y);
printf("\n%i + %i = %i\n", x, y, add(x, y));
return 0;
}