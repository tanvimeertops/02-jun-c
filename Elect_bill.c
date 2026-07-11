#include<stdio.h>
float calculateBill(int units){
    if(units<=100){
        return(units*2);
    }else if(units<=200){
       return(units*3);
    }else{
        return(units*5);
    }

    }

int main(){

    printf("Your bill is %f",calculateBill(201));

    return 0;
}