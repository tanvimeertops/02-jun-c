#include<stdio.h>
/*
else if ladder
if(contion){
statement
}else if(condition){
statement
}else if(condition){
statement
}
*/
int main(){
    int percentage=67;
    /*
    70>=distinction
    60>= first class
    50>= second class
    35>= third class
    fail
    */
    if(percentage>=70){ 
        printf("\ndistinction");
    }else if(percentage>=60){
        printf("\nfirst class");
    }else if(percentage>=50){
        printf("\nsecond class");
    }else if(percentage>=35){
        printf("\nthird class");
    }else{
        printf("\nFail!!!");
    }


    /*
    salary<=3 lakh --> 0
    salary<=7 lakh -> 5%
    salary>7 lakh ->10%
    */
    int salary=600000;
    if(salary<=300000){
        printf("\n0 tax");
    }else if(salary<=700000){
        printf("\n5 percent tax");
    }else{
        printf("\n10 percent tax");
    }

    return 0;
}