#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"Number is Three digit"<<endl;
    }
    else{
        cout<<"Number is NOT three digit"<<endl;
    }
}