#include <iostream>
using namespace std;
int main(){
    cout<<"Enter Cost Price : ";
    float cp, sp, lp;
    cin>>cp;
    cout<<"Enter a Selling Price : ";
    cin>>sp;
    lp=sp-cp;

    if(cp>sp){
        cout<<"Seller have made loss"<<endl;
        cout<<"Loss is: "<<(-lp)<<" Rs"<<endl;
    }
    if(cp==sp){
        cout<<"Seller didn't made profit nor loss"<<endl;
    }
    if(cp<sp){
        cout<<"Seller have made Profit"<<endl;
        cout<<"Profit is: "<<lp<<" Rs"<<endl;
    }
}