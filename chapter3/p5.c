/*a five digit number is entered through the keyboard.
write a program to obtain the reverse number 
and to determine whether the original and reversed number are equal or not */

#include<stdio.h>
int main()
{
    int n,a,b,num;
    long int revnum =0;
    printf("\nEnter a five digit");
    scanf("%d",&n);

    num = n ;
    a = n%10;
    n = n/10;
    revnum = revnum+a*10000L;
    a = n%10;
    n = n/10;
    revnum =revnum+a*1000;
    a = n%10;
    n = n/10;
    revnum=revnum+a*100;
    a=n%10;
    n=n/10;
    revnum=revnum+a*10;
    a=n%10;
    n=n/10;
    revnum = revnum+a;

    if(revnum==num)
        {printf("given number and its reversed number are equal\n");
        printf("%d",&revnum);}
    else 
        printf("given number and its reverse are not equal");
        printf("%d",&revnum);

return 0;
}





