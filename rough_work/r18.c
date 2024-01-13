/*	(c)	Create a structure to specify data of customer in a bank. The data is to be stored is: account number, name, and balance. Assume maximum of 200 customers in the bank. Write a C program to perform the following tasks.
I-	Print the account number and name of each customer with balance below Rs 100.
II-	Print the name of those customers whose account number is even.
*/
#include<stdio.h>
struct customer{
  int acc_num;
  char name[12];
  int blnc;
};
int main(){
  int n;
  printf("data of how many customers you want to enter??\n");
  scanf("%d",&n);
  struct customer cust[n];
  for(int i=0;i<n;i++){
    printf("enter data for customer %d\n\n",i+1);
    printf("enter the account number:\n");
    scanf("%d",&cust[i].acc_num);
    printf("enter the name of the customer:\n");
    fflush(stdin);
    scanf("%c",&cust[i].name);
    printf("enter the balance:");
    fflush(stdin);
    scanf("%d",&cust[i].blnc);
    printf("\n");
  }
  for(int i=0;i<n;i++){
    if(cust[i].blnc<=100){
      printf("%d",cust[i].acc_num);
      printf("%c",cust[i].name);
    }

}
}
