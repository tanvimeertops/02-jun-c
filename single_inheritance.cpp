#include<iostream>
using namespace std;
/*
inheritance : acquiring the function or 
attribute of another class
person
 name 
 age
  |
  |
  |
student
employee
customer
public: accesible everywhere
private :accesible within the class
protected: accesible in child class

*/

class Peron{
    protected:
    string name="Qaid";
    public:
        void displayPerson(){
            cout<<"name is "<<name<<endl;
        }
};

class Student:public Peron {
    
     public:
    int marks;
   
    void displayMarks(){
        cout<<"marks is "<<marks<<endl;
    }
};
int main(){
    Student s1;
    // s1.name;
    s1.displayPerson();
    s1.marks=45;
    s1.displayMarks();
    return 0;
}