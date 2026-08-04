#include<iostream>
using namespace std;
/*
class 
object
inheritance
encapsulation
polymorphism
abstraction
*/
class Student {
   public:
    int roll_no;
    string name;
};
int main(){
    Student s1;

    s1.roll_no=23;
    s1.name="harish";

    cout<<"roll no  "<<s1.roll_no<<endl;
    cout<<"name is "<<s1.name<<endl;
    return 0;

}