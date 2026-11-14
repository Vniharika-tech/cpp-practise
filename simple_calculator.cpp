#include<iostream>
using namespace std;
int main(){
    float a;
    float b;
    char c;
    cout<<"enter number a:";
    cin>>a;
    cout<<"enter number b:";
    cin>>b;
    cout<<"enter operator for calculation (+,-,*,/):";
    cin>>c;

    if(c == '+'){
        cout<<a+b;
    } else if(c == '-'){
        cout<<a-b;
    } else if(c == '*'){
        cout<<a*b;
    } else 
        cout<<a/b;
}