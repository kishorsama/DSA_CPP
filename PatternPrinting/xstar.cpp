#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no. of rows: "; cin>>n;
    //cout<<"Enter no. of columns: "; cin>>m;
    m=(n/2)+1;
    for (int i = 1; i<=n; i++){
        for (int j=1; j<=n;j++){
            if(i==j || i+j==n+1) cout<<"*";
            else cout<<" "; 
        }
        cout<<endl;
    }
}