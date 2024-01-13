/*if cp and sp of an item are input through keyboard
write a program to find if the seller
has incured loss or profit during the trade
*/
#include<stdio.h>
int main()
{
  float sp,cp,p,l;
  printf("enter the selling price and cost price of the item:");
  scanf("%f %f",&sp,&cp);
  p=sp-cp;
  l=cp-sp;

  if(p>0)
    printf("the seller has made a profit:%f",p);
  
  if(l>0)
    printf("the seller has made a loss of:%f",l);
  
 return 0;

}