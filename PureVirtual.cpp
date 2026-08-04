#include<iostream>
using namespace std;
/*
abstraction : details are hidden only essential
 information is shown
*/
 class Form{
    public:
   virtual void submit()=0; //pure virtual func

 };

 class AdmissionForm : public Form{
    public:
    void submit() override{
        cout<<"Admission Form Submitted!!!"<<endl;
    }

 };

 class Jobform : public Form{
    public:
    void  submit() override{
        cout<<"Job Form Submitted!!!"<<endl;

    }

 };
int main(){
    AdmissionForm a1;
    Jobform j1;

    Form *f1=&a1;
    Form *f2=&j1;

    f1->submit();
    f2->submit();

    
}