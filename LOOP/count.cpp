#include <iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0){
        n/=10;
        count++;
    }
    if(count>0){
    cout<<count<<endl;
    }
    else{
        cout<<1<<endl;
    }
}