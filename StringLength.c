#include<stdio.h>
#include<string.h>
int main(){
/*
strlen() //to get string length
*/

char password[]="Admin123";

printf("length of password is %ld",strlen(password));

if(strlen(password)>=8 && strlen(password)<16){
    printf("\nvalid password length");
}else{
    printf("\nnot a valid password length");
}
return 0;
}