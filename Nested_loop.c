#include<stdio.h>
/*
nested loop : 
1st loop : row
2nd loop : column
*/
int main(){
    for(int i=1; i<=3;i++){
        for(int j=1;j<=5;j++){
            printf("\nrow no is %d and col is %d",i,j);
        }
    }
    return 0;
}