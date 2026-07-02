#include<stdio.h>
/*
sales report 
weekly sales report
day 1 sales 4582
day 2 sales 8596
*/
int main(){
    int sales[7]={4582,8596,7489,4185,9652,1452,7486};
    for(int i=0 ;i<7;i++){
        printf("\n day %d sales %d",i+1,sales[i]);
    }
    return 0;
}