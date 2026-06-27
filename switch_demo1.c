#include<stdio.h>
/*
1. Deposit
2. Withdraw
3. Balance Check
4. Exit
*/
int main(){
    int choice=2;
    switch(choice)
    {
        case 1:
        printf("Deposit");
        break;
        case 2:
        printf("Withdraw");
        break;
        case 3:
        printf("Balance Check");
        break;
        default:
        printf("Invalid choice");
        
    }

    return 0;
}