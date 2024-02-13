#include <iostream>
using namespace std;
int main()
{
    int n;
    // cout << " " << endl;
    cin >> n;
    fibonacci series int a = 1, b = 2;
    for (int i = 1; i <= n; i++)
    {
        int nextNum = a + b;
        cout << nextNum << " ";
        a = b;
        b = nextNum;
    }
    //checking prime using for loop
    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            cout << "not prime" << endl;
        }
        else
        {
            cout << "prime" << endl;
        }
        break;
    }
     // break method
    for(int i=1; i<=n; i++){
    cout<<i<<endl;
    }
      int i =1;
      for(; ;){
       if (i<=n){
        cout<<i<<endl;
       }
       else{
        break;
       }
       i++;
      }
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout << sum << endl;
}