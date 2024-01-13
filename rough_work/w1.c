#include<stdio.h>
struct customer{
  int acc_num;
  char name[12];
  int blnc;
};
int main(){
  int n;
  printf("data of how many customers you want to enter??");
  scanf("%d",&n);
  fflush(stdin);
  struct customer cust[n];
  for(int i=0;i<n;i++){
    printf("enter the account number:\n");
    scanf("%d",&cust[i].acc_num);
    fflush(stdin);
    printf("enter the name of the customer:\n");
    scanf("%c",&cust[i].name);
    fflush(stdin);
    printf("enter the balance:\n");
    scanf("%d",&cust[i].blnc);
    fflush(stdin);
  }
  printf("ppl with below 100\n");
for(int i=0;i<n;i++){
    if(cust[i].blnc<100){
        printf("account numer:%d\n",cust[i].acc_num);
        printf("name %c\n",cust[i].name);
    }
}
printf("people with even account number:\n");

for(int i=0;i<n;i++){
 if(cust[i].acc_num % 2==0){
    printf("%c",cust[i].name);
 }
}

//arranging in decending order//

//using bubble sort//
for(int i=0;i<n-1;i++){
  for(int j=0;j<n-i-1;j++){
    if(cust[j].blnc>cust[j+1].blnc){
      int temp;
      temp=cust[j].blnc;
      cust[j].blnc=cust[j+1].blnc;
      cust[j+1].blnc=temp;
    }
  }
}


}