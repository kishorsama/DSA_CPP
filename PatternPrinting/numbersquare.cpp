#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no. of rows: "; cin>>n;
    //cout<<"Enter no. of columns: "; cin>>m;
    for (int i = 0; i<n; i++){
        for (int i=0; i<n;i++){
            cout<<(i+1); 
        }
        cout<<endl;
    }
}