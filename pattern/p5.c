#include<stdio.h>
int main(){ int n=7;
for(int i=0;i<7;i++)
 { for(int j=0;j<13;j++)
    {if((i+j)>=7 && (i+j)<=17)
     { printf(" ");
     }
     else
     { printf("*");
     }
     }
}
printf("\n");
return 0;
}



