#include<iostream>
/*
    overriding : same func same protocol use with inheritance
*/
using namespace std;
class Payment {
    public:
    void pay(){
        cout<<"Payment succesful"<<endl;
    }
};
class UPI:public Payment{
    public:
    void pay(){
        cout<<"UPI payment successful"<<endl;
    }
} ;

int main(){
    UPI u1;
    u1.pay();

    return 0;
}