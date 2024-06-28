#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter 3rd number: ";
    cin>>c;
    
    if((a>b) && (a>c)){
        cout<<a<<" Is greatest"<<endl;
    }

    if((a<b) && (b>c)){
    cout<<b<<" Is greatest"<<endl;
    }

    if((c>b) && (a<c)){
    cout<<c<<" Is greatest"<<endl;
    }
}