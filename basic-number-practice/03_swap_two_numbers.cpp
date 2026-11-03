#include <iostream>
using namespace std;
int main() {
    int a,b,x;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"a : ";
    cout<<a<<"\n";
    cout<<"b : ";
    cout<<b<<endl;
    cout<<"Swapping numbers"<<endl;
    x=a;
    a=b;
    b=x;
    cout<<"a : ";
    cout<<a<<"\n";
    cout<<"b : ";
    cout<<b;
    return 0;
}
