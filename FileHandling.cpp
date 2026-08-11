#include<iostream>
#include<fstream>
using namespace std;
/*
write
ofstream
read
*/
int main()
{
    ofstream fout;

        //1.open n create file
            fout.open("Student.txt",ios::app);
        // 2. write into file
            fout<<"\nDhruv";
            fout<<" marks: 85";
        //3. close file
            fout.close();
    return 0;
}