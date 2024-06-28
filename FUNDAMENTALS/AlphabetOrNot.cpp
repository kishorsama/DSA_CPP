#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    
    int convo = (int)ch;
    
    if((ch>=65 && ch<=91) || (ch>=97 && ch<=123 )){
        cout<<"character is alphabet"<<endl;
    }
    else{
        cout<<"character is not alphabet"<<endl;
    }
}