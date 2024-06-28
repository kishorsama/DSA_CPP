#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    switch (n){
        case 1:
        cout<<"Mon"<<endl;
        break;
        case 2:
        cout<<"Tue"<<endl;
        break;
        case 3:
        cout<<"Wednesday"<<endl;
        break;
        case 4:
        cout<<"Thus"<<endl;
        break;
        case 5:
        cout<<"Fri"<<endl;
        break;
        case 6:
        cout<<"Sat"<<endl;
        break;
        case 7:
        cout<<"Sun"<<endl;
        break;
        default :
            cout<<"Invalid Number"<<endl;

    }
    return 0;
}