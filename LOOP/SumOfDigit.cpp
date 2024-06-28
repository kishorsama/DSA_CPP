#include <iostream>
using namespace std;
int main(){
    int a, n;
    cout<<"Enter a number: ";
    cin>>n;
    a=0;
    int sum = 0;
    while(n>0){
        sum = sum*10;
        a = n%10;
        sum = sum + a;
        n /=10;
    }
    cout<<sum<<endl;
}
