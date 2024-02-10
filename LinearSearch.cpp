//? Array ={12,18,20,42,8,10}
//? Key =8

// ! Time Complexity = O(n)

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Whats the size of the array?: " << endl;
    cin >> n;

    int arr[n];
    cout << "Give the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Whats the key element?: " << endl;
    cin >> key;

    cout << linearSearch(arr, n, key) << endl;
}
