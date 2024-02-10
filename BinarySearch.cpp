//? Array = {8,10,12,21,27,34,42}
//? Key =27

//! Time Complexity = O(log base 2 N)

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n-1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Whats the size of array: " << endl;
    cin >> n;

    int arr[n];
    cout << "What are the elements of the array?: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Whats the key element?: " << endl;

    int key;
    cin >> key;

    cout << binarySearch(arr, n, key);
}