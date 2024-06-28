#include <iostream>
using namespace std;

int main(){
    float p,t,r,si;
    cout<<"Enter Principal amount: "; cin>>p;
    cout<<"Enter Rate of interest: "; cin>>r;
    cout<<"Enter Time Period: "; cin>>t;
    si=(p*t*r)/100;
    cout<<"Your Simple Interest is: "<<si<<endl;
    return 0;
    

}