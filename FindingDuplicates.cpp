#include<iostream>
using namespace std;
int main (){

    int arr[9] = {2,3,4,5,4,3,2,6,7};
     
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i< size; i++){
        for(int j = i + 1;j<size;j++){
            if(arr[i]==arr[j])
            cout<<"Duplicate element found"<<arr[j]<<endl;
        }
    }
    return 0;
}