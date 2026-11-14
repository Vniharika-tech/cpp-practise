#include <iostream>
using namespace std;

int main() 
{
    float l ;
    float b ;
    cout<<"enter lenghth of rectangle:";
    cin>>l;
    cout<<"enter breadth of rectangle:";
    cin>>b;
    cout<<"area of reactangle:";
    cout<<l*b<<endl;
    cout<<"parameter of reactangle:";
    cout<<2*(l+b)<<endl;
    if(l*b > 2*(l+b)){
        cout<<"area is greater than parameter";
    }
}