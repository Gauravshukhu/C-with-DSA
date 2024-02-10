#include <iostream>
using namespace std;
int main()
{
    // first question
    /* int n;
     cin >> n;
     int i = 1;
     while (i <= n)
     {
         int j = 1;
         while (j <= n)
         {
             cout << j << " ";
             j=j+1;
         }
         cout << endl;
         i = i + 1;
     }*/

    // 2nd question
    /* int n;
     cin >> n;
     int i = 1;
     while (i <= n)
     {
         int j = 1;
         while (j <= n)
         {
             cout << n - j + 1;
             j = j + 1;
         }
         cout << endl;
         i = i + 1;
     }*/

     //3rd question
     /*int n;
     cin>> n;
     int i =1;
     int count = 1;
     while (i<=n){
        int j = 1;
        while (j<=n){
            cout<<count << " " ;
              count = count +1;
            j = j+1;
          
        }
        cout<<endl;
        i = i +1; */
         
         // 4th question 
         /*int n ;
         cin>> n;
         int i = 1;
         int count = 1;
         while(i<=n){
            int j = 1;
            while (j<= i){
                cout<< count  << " " ;
                count = count + 1;
                j = j+ 1;
             
                
            }
            cout<<endl;
            i = i+1 ;
         }*/
          
          int n ;
          cin>> n;
          int i = 1;
          int value = i;
          while (i<= n){
            int j = 1;
            while (j<=i){
                cout<<value<< " ";
                value = value + 1;
                j = j+1;


            }
            cout<<endl;
            i = i+1;
          }
}
