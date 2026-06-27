#include<stdio.h>
/*
    1. pizza
    2. burger
    3. noodle
    4. ice-cream

*/
int main(){
    int menu=3;
    switch(menu){
        case 1:
        printf("Pizza");
        break;
        case 2:
        printf("Burger");
        break;
        case 3:
        printf("Noodles");
        break;
        case 4:
        printf("Ice-cream");
        break;
        default:
        printf("invalid choice");

    }

    return 0;
}