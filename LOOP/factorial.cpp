#include <iostream>
using namespace std;
int main(){
    int fact,n;
    cout<<"Enter a number: ";
    cin>>n;
    fact = 1;
    while(n>0){
        
        fact = fact *n;
        n--;
    }
    cout<<fact<<endl;
}
