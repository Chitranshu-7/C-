#include<iostream>
using namespace std;

class A{
    public:
    int a , b;

    void input(){
        cout<<"Enter two number's";
        cin>>a>>b;
    }

    friend void demo( A ob);
};

void demo(A ob){
    int c;
    c= ob.a + ob.b;
    cout<<c;
}
int main(){

    A obj;
    obj.input();
    demo( obj);
}