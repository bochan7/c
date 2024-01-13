#include<stdio.h>
int main()
{
 int l,b,r,perimeter,area1;
 float area2,circum;
 printf("\nenter the length & breadth of rectangle:");
 scanf("%d %d",&l,&b);
 area1=l*b;
 perimeter=2*l+2*b;
 printf("the area of the rectangle is:%d\n",area1);
 printf("the perimeter of rectangle is:%d\n",perimeter);
 printf("enter the radius of the circle:%f\n",r);
 scanf("%d",&r);
 circum = 2*3.14*r;
 area2=3.14*r*r;
 printf("the area of circle is:%f",area2);
 printf("the area of rectangle:%f",circum);

 return 0;

}