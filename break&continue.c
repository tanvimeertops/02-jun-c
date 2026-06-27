#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){ //2
        if(i==3){ //3==3
            printf("\nStudent %d absent",i);
           continue; //skip
        }
        printf("\nStudent %d present",i);
        
    }
    /*
    total product 5
    product 4 no detail
    */
    return 0;

}