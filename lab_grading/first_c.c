#include<stdio.h>
int main()
{
 int num=35;
 /*unary operator demonstration*/
 printf("unary plus:=%d=%d\n",num,+num);
 /*increment decrement*/
 printf("pre-increment:++num=%d\n",++num);
 printf("post-increment:num++=%d\n",num++);
 printf("after post-increment:num=%d\n",num);
 printf("pre-decrement:--num=%d\n",--num);
 printf("post-decrement:num--=%d\n",num);
/*unary plus and minus */
    printf("Unary Plus: +%d = %d\n", num, +num);
    printf("Unary Minus: -%d = %d\n", num, -num);
/* Logical NOT and Bitwise NOT*/
 int boolValue = 0;
  printf("Logical NOT: !%d = %d\n", boolValue, !boolValue);
 int bitValue = 5;  /* Binary 101*/
  printf("Bitwise NOT: ~%d = %d\n", bitValue, ~bitValue);
return 0;
}

