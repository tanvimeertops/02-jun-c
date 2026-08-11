/*
Mini Project 2: 
“Creator Dashboard Lite”
Objective: Create a console app for digital creators to 
manage content ideas.
Implement Content class (title, platform, views, status).
Allow user to add, edit, delete content items.
Store data using file handling.
*/
#include<iostream>
#include<fstream>
using namespace std;
class Content{
    public:
    string title;
    string platform;
    int views;
    string status;

};

int main(){
    int choice;
    Content c;
    while(true){
    cout<<"=========Creator Dashboard Lite========\n";
    cout<<"1. Add Content"<<endl;
    cout<<"2. View Content"<<endl;
    cout<<"3. Edit Content"<<endl;
    cout<<"4. Delete Content"<<endl;
    cout<<"5. Exit\n";
        cout<<"Select an Option : ";
        cin>>choice;
        switch(choice){
            case 1:
            {
                cout<<"Enter Title: ";
                //garbage cleaning
                cin.ignore();
                getline(cin,c.title);
                
                cout<<"Enter Platform :";
                getline(cin,c.platform);
                cout<<"Enter Views ";
                cin>>c.views;
                cout<<"Enter Status :";
                cin>>c.status;
                ofstream fout("context.txt",ios::app);

                fout<<c.title <<" | " <<c.platform 
                <<" | "<<c.views <<"  | "<<c.status<<endl;
                fout.close();
                break;
            }
            case 2:
            {
            string data;
                ifstream fin("context.txt");
                
                while(getline(fin,data)){
                    cout<<data<<endl;
                }
                fin.close();
            
            break;
                
            }
        }


    }

}