/*determining whether the entered charecter is a capital letter,
a small case letter a digit 
or a symbol or not(their ASIC value is given) */
#include<stdio.h>
int main(){
    char ch;

    printf("enter the charecter as per your choice:");
    scanf("%c",&ch);

    if(ch>=65&&ch<=90);
    printf("entred charecter is in upper case:\n");
    if(ch>=97&&ch<=122)
    printf("entered cahrecter is in small case");
    if(ch>=48&&ch<=57)
    printf("entered charecter is a number");
    if(ch>=0 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=127 )
    printf("entered charecter is a special symbol");

return 0;
}