#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool flag = true;
    for (int i=2; i<=n-1; i++) {
        if(n%i==0){
        flag = false;
        break;
        }
    }

    if (flag==true){
        cout<<"Number is prime"<<endl;
    }
    else{
        cout<<"Number is composite"<<endl;
    }
}