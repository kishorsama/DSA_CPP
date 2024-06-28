#include <iostream>
using namespace std;

int main() {
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    if(n%5==0){
        cout<<"Number is divisible by 5"<<endl;
    }
    else {
        cout<<"Number is NOT divisible by 5"<<endl;
    }
}