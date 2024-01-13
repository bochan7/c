//WAP will scan a character string passed as an argument and convert all lowercase characters into their uppercase equivalents.
#include<stdio.h>
void upper(char[]);
int main(){
 char str[20];
 printf("enter the string :");
 gets(str);
 upper(str);
 getch();
 return 0;
}
void upper(char str[20])
{
    int i;
    printf("%s in upper case is ",str);
    for(i=0;str[i];i++)
    {
         if(str[i]>96 && str[i]<123)
         str[i]-=32;
    }
    printf("%s",str);
}