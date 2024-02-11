#include <iostream>
using namespace std;
int main()
{
    // 1st question
    /* int n ;
     cin>> n;
     int i = 1;
     char ch = 'A'; //ASCII TABLE
     while(i<=n){
         int j = 1;
         while (j<=n){
             cout<< ch << " ";
             ch = ch + 1;
             j = j + 1;


         }
         cout<<endl;
         i = i + 1;
     }*/

    // 2nd question
    /*int n ;
    cin>> n;
    int i = 1;
    //ASCII TABLE
    while(i<=n){
        int j = 1;
        while (j<=n){
            char ch = 'A' + i + j - 2;
            cout<< ch << " ";

            j = j + 1;


        }
        cout<<endl;
        i = i + 1;*/

    // 3rd question
    /* int n ;
    cin>> n;
    int row = 1;
    while (row<= n){
     int col = 1;
     char start = 'A' + n - row ;
     while(col <= row){
         //char start = 'A' + n - row ;
       cout<<start<< " ";
       start = start + 1;
       col = col + 1;
     }
     cout<<endl;
     row = row + 1;
    }
    */

    // 4th question
    /*int n ;
    cin>> n;
    int row =1;
    while (row<= n){
      int space = n -row;
      while(space){
          cout<< " ";
          space = space  - 1;
      }
      int col =1;
      while (col <= row){
       cout<< "*";
       col = col + 1;
      }
      cout << endl ;
      row = row + 1;
    }*/
    // fith question
    /*int n ;
     cin>> n;
     int row = 1;
     while (row <= n){
       int col = 1 ;
       int start = n - row + 1;
       while ( col <= start){
           cout<< "*" ;
           int space = n- row;
           col = col + 1;
       }
      cout<<endl ;
      row = row + 1;
     }*/

    // 6tth question
    /* int n ;
     cin>>n;
     int row = 1;
     while (row <=n){
      int col = 1;

      int space = 1;
      while (space < row){
          cout << " ";
          space = space + 1;
      }
      while(col <= n - row + 1){
        cout << " * ";
        col = col + 1;

      }
      cout<<endl;
      row = row + 1;
     }*/
    // 7th question

    /* int n;
     cin>> n;
     int row = 1;
     while (row<= n){
      int space  =  n - row ;
      while (space){
          cout << " ";
          space = space - 1;

      }
      int col = 1;
      while ( col <= row){
          cout << col ;
          col = col + 1;
      }


      int start = row  - 1;
      while (start){
          cout<<start;
          start = start - 1;
      }
      cout << endl;
      row = row + 1;
     }*/

    // 8th question
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col << " ";
            col = col + 1;
        }
    }
     row = row + 1;
    cout << endl;
    
}
