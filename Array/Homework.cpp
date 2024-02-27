#include <iostream>
using namespace std;
int sum(int arr[] ,int n){
   int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
 
    return sum;
}






int main(){
    int size;
    cin>> size;
    int arr[6];
    for(int i = 0; i<size; i++){
       cin>>arr[i];
    }
    cout << "sum of all arr is" << sum(arr , size) <<endl;
   
}