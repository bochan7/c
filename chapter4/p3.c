#include<stdio.h>
int main(){
  int h,ts;
  float cc;
  printf("enter the hardness:\n");
  scanf("%d",&h);
  printf("enter the carbon content\n");
  scanf("%f",&cc);
  printf("enter the tensile stregth:\n");
  scanf("%d",&ts);

  if(h>50 && cc<0.7 && ts>5600)
   {
    printf("the grade of steel is 10");
    
    }
  if(h>50 && cc <0.7 && ts<=5600)
   {
    printf("the grade of steel is 9");
    
    }
  if(h<=50 && cc <0.7 && ts>5600)
   {
    printf("the grade of steel is 8");
    
    }
  if(h>50 && cc>=0.7 && ts>5600)
   {
    printf("the grade of steel is 7");
    
    }
  if(h>50 || cc<0.7 || ts>5600)
   {
    printf("the grade of steel is 6");
    
    }
  if(h<50 && cc>0.7 && ts<5600)
   {
    printf("the grad of the steel is 5");
    
    }

return 0;

}