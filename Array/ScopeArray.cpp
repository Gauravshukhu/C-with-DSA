#include <iostream>
using namespace std;
int update(int num[] , int n){
     num[0]=200;
   
    
    for(int i = 0 ; i<3; i++ ){
      cout<<num[i]<< endl << " ";
    }cout<<endl << " ";

    cout<<"going back to main function" << endl;
}



int main(){
  
    int num[3] = { 2,3,4};
    update(num , 3);
     cout<<"printing the  main function" << endl;
    for(int i = 0 ; i<3 ; i++){
      cout<<num[i]<< endl << " ";
    }
    return 0;
}
   
   