#include<stdio.h>
/*
datatype    format specifier
int             %d
char            %c
float           %f
long            %ld
long long       %lld
double          %lf
Salary increment :



salary increment
input :
current_salary=50000
appraisal_amt=5000
process :
Total_salary=current_salary+appraisal_amt

output:
Total_salary

shopping cart:

input :
price =50
quantity =3
process :
total_price=price*quantity
o/p
total_price

*/
int main()
{
    float price;
    printf("Enter price :");
    scanf("%f",&price);
    printf("Price is %.2f",price);
    return 0;
}