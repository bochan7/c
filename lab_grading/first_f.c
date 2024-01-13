#include <stdio.h>
int main()
 {
    int a = 20, b = 39, c;
    
    /*Comma operator demonstration*/ 
    c = (a += 2, b *= 3, a + b); /*Evaluate a += 2, then b *= 3, and finally a + b*/ 
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
 }   
