#include <stdio.h>

int factorial(int n) {
   int f;

   for(f = 1; n > 1; n--)
      f = f*n;

   return f;
}

int npk(int n,int k) {
   return factorial(n)/factorial(n-k);
}

int main() {
   int n, k;
   printf("enter the value of n\n");
   scanf("%d",&n);
   printf("enter the value of k\n");
   scanf("%d",&k);
   if(n>k){
   printf("%dp%d = %d \n", n, k, npk(n,k));
   }
   else{
    printf("n can't be gr8er than k\n");
   }
}