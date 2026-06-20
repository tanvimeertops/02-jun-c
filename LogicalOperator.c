#include<stdio.h> //library input output function
#include <stdbool.h>
//Logical operator && || !
/*
&& is 2 condition must be true
|| any one condition can be true
! neither condition will be true
*/
int main(){
    int age=13;
    bool isCitizen=true;

    if(age>=18 && isCitizen){
        printf("Person is eligible to vote");
    }else
    {
        printf("Person is not eligible to vote");
    }


    return 0;
}