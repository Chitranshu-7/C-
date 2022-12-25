#include<iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter a character: ";
    cin>>c;

    if( c>='A' && c<='Z'){
        cout<<"UpperCase character.";
    }
    else if(c>='a' && c<='z'){
        cout<<"LowerCase character. ";
    }
    else{
        // cout<<"Special symbol."<<c<<endl;
        cout<<c<<" is the special symbol.";

    }

}