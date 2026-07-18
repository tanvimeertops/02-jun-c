#include<iostream>
using namespace std;
/*
1. Add student
2. View student
3. update marks
4. exit

input 
choice
roll no
name
marks

*/
int main(){
    int choice,roll_no,marks;
    string name;
    while(true){
        cout<<"1. Add student"<<endl;
        cout<<"2. View student"<<endl;
        cout<<"3. update marks"<<endl;
        cout<<"4. exit"<<endl;
        cout<<"enter your choice :";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"enter roll no :"<<endl;
                cin>>roll_no;
                cout<<"enter name :"<<endl;
                cin>>name;
                cout<<"marks :"<<endl;
                cin>>marks;
                break;
            case 2:
                cout<<"Roll no is :"<<roll_no<<endl;
                cout<<"Name is :"<<name<<endl;
                cout<<"Marks is :"<<marks<<endl;
                break;
            case 3:
                cout<<"enter updated marks :"<<endl;
                cin>>marks;
                cout<<"marks updated successfully\n";
                break;
            case 4:
                cout<<"Succesfully exit"<<endl;
                return 0;
            default:
                cout<<"Invalid choice"<<endl;


        }
    }
    return 0;
}