#include<iostream>
using namespace std;

// void demo(string name, int age); // demo function
// int demo(int n);                 // same demo functin with differnt parameter.
// int main(){
  
//   demo("Chitransu",10);
//   demo(20);
// }


// void demo(string name , int age){

//     string n= name;
//     int a= age;
//     cout<<"Name is: "+n<<endl;
//     cout<<"Age is: "+a<<endl;
// }

// int demo(int n){
//     int sal=n;
//     cout<<"Salary: "+sal<<endl;
// }



void demo(int a, int b){
    cout<<"a and b is: "<< a<<b<<endl;
}
void demo(float a, float b){
    cout<<"a and b is: "<< a<<b<<endl;
    
}

int main(){
    demo(10,100);
    // demo(12.21,25.25);
    return 1;
}
