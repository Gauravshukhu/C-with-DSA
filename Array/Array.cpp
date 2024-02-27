#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // declare
    int num[15];
    // cout<< "the value of index of 14 is " << num[0] << endl;

    // initialing all location  with zero
    int dk[15] = {2, 3, 4};
    //  int n = 15;
    // printArray(dk , 15);

    int kk[15] = {1};
    // n = 15;
    // printArray(kk , 15);

    int n = 7;
    char ch[7] = {'a', 'b', 'c', 'd', 'r', 'g', 's'};
    // cout<< "print char" << "  " << ch[5] << endl;
    for (int i = 0; i < n; i++)
    {
       
        cout << "all char " << ch[i] << endl;
    };

    return 0;
}