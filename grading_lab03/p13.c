//Build a function to check whether the number is prime or not. If the number is prime, the function returns value 1; otherwise, it returns 0.//
#include<stdio.h>
#include<math.h>
int Check_Prime(int);   
int Check_Prime(int){
    int n;
    int i = 2;
    while (i <= sqrt((n)+1))
    {
         if(n % i == 0)
            return 0;
         else
             i++; 
    
    }
    return 1;
}
int main(){
    int n, prime;
    printf("enter the number :");
    scanf("%d", &n);
    prime = Check_Prime(n);
    if (prime == 1)
       printf("the number %d is a prime number", n);
    else 
       printf("the number %d is not a prime number",n);
return 0;
}
