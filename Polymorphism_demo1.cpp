#include<iostream>
using namespace std;
/*
overloading : same func name but diff parameter
compile time polymorphism
*/

class Print_polymorphism{
    public :
    void print(int x){
        cout<<"Integer val is "<<x<<endl;
    }
    
    void print( b){
        cout<<"Name is "<<b<<endl;
    }

};
int main(){
    Print_polymorphism pp ;
    pp.print(774);
    pp.print("Qaid");
    return 0;
}