#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[6] = {2, 4, 5, 18, 19, 20};

    int key;
    cin >> key;

    bool found = search(arr, 6, key);
    if (found)
    {
        cout << "key will present" << endl;
    }
    else
    {
        cout << "key will absent" << endl;
    }
    return 0;
}