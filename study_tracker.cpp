#include <iostream>
#include <string>
#include<fstream>
using namespace std;
int main() {
    
    int choice;
    string subject;
    float hours;
    while (true){
     cout<<"=====Study Tracker====="<<"\n";
     cout<<"1. Add study session"<<"\n";
     cout<<"2. View study tracker"<<"\n";
     cout<<"3. Exit"<<"\n";
     cout<<"Enter a number between (1-3) : ";
     cin>>choice;
 
     if (choice==1){
        ofstream file ("study.txt",ios::app);
        cout<<"1. Add study session"<<"\n";
        cout<<"Subject : ";
        cin>>subject;
        cout<<"Hours : ";
        cin>>hours;
        file <<"subject : "<<subject<<"\n";
        file<<"Hours : "<<hours<<"\n";
     }
     else if (choice==2){
        cout<<"2. View study tracker"<<"\n";
         ifstream file("study.txt");
         string line;
         while (getline(file,line)){
             cout<<line<<"\n";
         }
     }
     else if (choice==3){
        cout<<"3. Exit";
        break;}
       
     else
        cout<<"Invalid Choice";}
       
    return 0;
}
