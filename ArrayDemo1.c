#include<stdio.h>
/*
Array :multiple value of same datatype
always start with 0
*/
int main()
{
    // int marks1=45;
    //  int marks2=41;
    //   int marks3=65;
    //    int marks4=75;
    //     int marks5=35;
        int marks[5]={45,41,65,75,35};//size-1
    for(int i=0 ;i<5;i++){ //i=1
        printf("\n%d",marks[i]); //marks[1]
    }
    return 0;
}