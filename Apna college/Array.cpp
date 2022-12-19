#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5,8,33,12,13};
    int max=arr[0];

    // int res= -1;

    for(int i=0; i<9; i++){
        if(max<arr[i]){
            max=arr[i];

        }
        
    }

    cout<<"Maximum element is : "<<max<<endl;

}