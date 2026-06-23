#include<stdio.h>
/*
if(condition){
statement
}
*/
int main(){
    int balance=10000;
    int amount=5000; 
    if(balance>amount){
        printf("\nWithdraw sucessful");
    }

    int marks=45;
    if(marks>=35){
        printf("\npass");
    }
    return 0;
}