#include<stdio.h>
#include <stdbool.h>
int main(){
    bool isAdmin=false;
    bool isSuperAdmin=true;

    if(isAdmin || isSuperAdmin){
        printf("Access Provided");
    }
}