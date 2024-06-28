#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(n>0){
        cout<<"Absolute value of "<<n<<" is "<<n<<endl;

    }
    else {
        cout<<"Absolute value of "<<n<<" is "<<(-n)<<endl;
    }
}