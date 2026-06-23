#include<stdio.h>
int main(){
    int balance=10000;
    int amount=15000; 
    if(balance>amount){
        printf("\nWithdraw sucessful");
    }else{
        printf("\nInsufficient balance");
    }

    int marks=25;
    if(marks>=35){
        printf("\npass");
    }else{
        printf("\nFail");
    }
    return 0;
}