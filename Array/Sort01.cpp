#include<iostream>
using  namespace std ;

void printArr(int arr[] , int n){
    for(int i =0 ; i<n ; i++){
        cout<<" "<<arr[i]<<" "<<endl;

    }
    cout<<" "<<endl;
}
void swapOne(int arr[] , int n){
   int left = 0 , right = n-1;
   while(left<right){
    while(arr[left]==0){
        left++;
    }
    while(arr[right] == 1){
        --right;
    }
    swap(arr[left],arr[right]);
    left++;
    --right;
   }
}
int main(){
    int arr[6]={0,1,1,1,0,0};
    swapOne(arr , 6);
    printArr(arr , 6);
    
    return 0;
}