#include<stdio.h>

int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

int main(){

  int i, n;
  int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;
  
  printf("Fibo Zahl für x berechnen, geben sie x ein: ");
  scanf("%d", &n);
  printf("\nFibo iterativ Ergebnis: %d, %d, ", t1, t2);
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  printf("\nFibo rekursiv Ergebnis: " , n);
	
   for(i = 0;i<n;i++) {
      printf("%d, ",fibbonacci(i));            
   }

  return 0;

}