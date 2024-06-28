#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no. of rows: "; cin>>n;
    //cout<<"Enter no. of columns: "; cin>>m;
    for (int i = n; i>0; i--){
        
        for (int j=i; j>0;j--){
            cout<<"*"; 
        }
        cout<<endl;
    }
}