#include <iostream>
using namespace std;
// CPP Program to find nth term of
// Arithmetic progression
#include <bits/stdc++.h>
using namespace std;
// question 3
int fibonaci(int n)
{
    int a = 0, b = 1, c;
    for (int i = 1; i < n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    cout << "last term of fibonacci series"
         << "  " fibonaci(n) << endl;
}

// question 1 find ap
int Nth_of_AP(int a, int d, int n)
{
    // using formula to find the
    // Nth term t(n) = a(1) + (n-1)*d
    return (a + (n - 1) * d);
}

int main()
{

    int a;
    cin >> a;

    int d;
    cin >> d;

    int n;
    cin >> n;

    cout << "The " << n
         << "th term of the series is : "
         << Nth_of_AP(a, d, n);

    return 0;
}