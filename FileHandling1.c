#include<stdio.h>
/*
file hnadling :to permanent store data
open
 |
write/read
 |
close
w=write
a=append
r=read
*/
int main(){
    FILE *fp;
    //to create and open a file
    fp=fopen("student.txt","a");
    //to write into file
    fprintf(fp,"Tops technologies!!!\n");
    fclose(fp);
    return 0;
}