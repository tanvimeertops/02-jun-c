#include<stdio.h>
float deposit(float balance, float amount){
    return balance+amount;
}
float withdraw(float balance, float amount){
   
        return balance-amount;
 
}
int main(){
    int balance=15000;
    int amount;
    printf("\n Enter amount to deposit :");
    scanf("%d",&amount);//5000
   printf("\ncurrent balancle is %f ",deposit(balance,amount)) ;
   float current_balance =deposit(balance,amount);
   printf("\n Enter amount :");
    scanf("%d",&amount);
   if(amount>current_balance){
    printf("Insufficient Balance");
   }
   else{
    printf ("\n Remaining balance is %f",withdraw(current_balance,amount));
   }
    
    return 0;
}