#include <iostream>
using namespace std;
int main()
// switch case
{
    int num = 5;

    switch (num)
    {
    case 1:
        cout << "it is one no" << endl;
        break;
    case 2:
        cout << "it is not one" << endl;
        break;
    default:
        cout << " not both" << endl;
    }



 //question 1
  // in same concept we make calculator also .
int ta,n;
cout << "enter the no notes" << endl;
cin>>ta;
cout << "enter the no notes you want" << endl;
cin>>n;
char op;
cin>> op;
switch ( op ){
    case '/': cout << " it is the no of notes" << (ta/n) <<endl;
     break;
}


}