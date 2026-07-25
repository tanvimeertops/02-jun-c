#include<iostream>
/*
Access specifier who can access our data
public : access everywhere (everyone must know)
private :acess within the class (only me)
protected : access inside class and child class only
(only share with child) 
*/
using namespace std;
class Employee{c
    private:
    int atm_pin;
    public:
    int emp_id;
    string emp_name;
    int salary;
};
int main(){
    Employee e1;//object created
    e1.emp_id=1;
    e1.emp_name="Qaid";
    e1.salary=890899;

    cout<<"employee id is "<<e1.emp_id<<endl;
    cout<<"employee name is "<<e1.emp_name<<endl;
    cout<<"employee salary is "<<e1.salary;
return 0;
}
