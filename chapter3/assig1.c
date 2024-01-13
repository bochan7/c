#include<stdio.h> 
int main() 
{ 
int term1 = 0, term2 = 1; 
int count,nextTerm; 
//Take the user input to print the series 
printf("Enter the number of terms:\n");
scanf("%d",&count); 
printf("The First %d terms of Fibonacci series are :\n",count); for (int j = 0 ; j < count ; j++ ) 
{ 
if ( j <= 1 ) 
nextTerm = j; 
else 
{ 
nextTerm = term1 + term2; 
term1 = term2; 
term2 = nextTerm; 
} 
printf("%d\n",nextTerm); 
} 
return 0; 
} 