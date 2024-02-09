#include <iostream>
using namespace std;
int main()
{
   //if condition
    int a = 10;
    int b = 4;
    if (a > b)
    {
        cout << "answer is a " << endl;
    }
    if (a < b)
    {
        cout << "answer is b " << endl;
    }

    /*if - else condition*/

    /*example 1*/
    int a, b;

    cin >> a >> b;

    if (a < b)
    {
        cout << "answer is b " << endl;
    }
    else
    {
        cout << "answer is a" << endl;
    }

    // example 2
    int a;
    cout << "enter the no " << endl;
    cin >> a;
    if (a < 0)
    {
        cout << "A is negative " << endl;
    }
    else
    {
        if (a > 0)
        {
            cout << " A is positive" << endl;
        }
        else
        {
            cout << "A is 0" << endl;
        }
    }

    // if - else Condition

    // example 1
    int purchase;

    cin >> purchase;

    if (purchase < 300)
    {
        cout << "yes it purchase" << endl;
    }
    else if (purchase < 500)
    {
        cout << "mAY BE purchase" << endl;
    }
    else
    {
        cout << "not purchase" << endl;
    }

    // example 2
    char a;
    cin >> a;
    if (a >= 'a' && a <= 'z')
    {
        cout << "it is lower case" << endl;
    }
    else if (a >= 'A' && a <= 'B')
    {
        cout << "it is Upper Case" << endl;
    }
    else if (a >= '0' && a <= '9')
    {
        cout << "it is numeric " << endl;
    }

    // Loop Concept
     // 1 - while  loop
    int n; 
    
    cin>> n;
    int i = 1;
    int s= 0;
    while (i <= n)
    {
      s = s + i; 
        i = i + 1;
        
        

    }
    cout << "value of s is " << s << endl;
    
      int n  ;
      cin>> n;
      int i = 1;
      int s =0;
      while (i <= n){
        if ( i % 2 == 0)
        s = s+ i;
        i = i+ 1;
      }
      cout << "value of sum all even no " << s << endl;
}
