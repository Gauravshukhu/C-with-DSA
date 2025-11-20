#include <iostream>
using namespace std;
int main (){

    int a = 4;
    int b =3;
    

   cout<< " a&b is " << (a&b) <<endl; //and operator (&)
    cout<< " a|b is " << (a|b) <<endl;//or operator (|)
     cout<< " ~b is " << ~b <<endl;//nor operator (~)
       cout<< " a^b is" << (a^b) <<endl; // XOR operator (^)

       cout << (17>>1) << endl;  // right operator
       cout << (17>>2) << endl;  // right operator
       cout << (19<<1) << endl;  // left operator

    int i = 7;
     cout<<(i++)<<endl; // post increment 7 , i=8
     cout<<(++i)<<endl; // pre increment i=9
     cout<<(i--)<<endl; // post Decrement 9 , i=8
     cout<<(--i)<<endl; // pre Decrement 7


}
