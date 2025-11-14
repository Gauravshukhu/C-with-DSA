#include<iostream>
using namespace std;
int BinarySearch(int arr[] , int size , int key){
    int start = 0;
    int end = size -1;
    //if int range is start=2^31-1 and end is end= 2^31-1 then it will overflow . 
    // int mid = (start+end)/2; 

    // so avoid overflow we different method to slove this 
     int mid = start + (end - start) /2; 

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //go to right wla part
        if(arr[mid]<key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        if(key>arr[mid]){
            start = mid+ 1;
        }else{
            end = mid - 1;
        }
       // mid=(start+ end)/2;
        mid = start + (end - start) /2; 
    }
    return -1;
}
int main(){
    int arr[7]={2,3,4,5,7,7,8};
     int arr1[5]={2,3,4,5,7};
    int evenindex = BinarySearch( arr , 6 , 7);
    cout<<" index of 7 in the array" <<" "<< evenindex << " " <<endl;
    int oddindex = BinarySearch( arr1 , 5, 4);
    cout<<" index of 4 in the array" <<" "<< oddindex << " " <<endl;


}
