#include<iostream>
using namespace std;

int main()

{
    // this method using  for one duplicate  array .
    int size;

    cout << " ENTER THE ELEMENT"<<endl;
    cin>>size;
    int ans = 0;
    int arr[7];
    cout<<"give array list"<<endl;
    cin>>arr[7];
    for(int i =0; i<size;i++){
        ans= ans^arr[i];
    }
    for(int i = 1; i<size; i++){
        ans = ans^i;
    }
   cout<<ans<<endl;
  
     


}