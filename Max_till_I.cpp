// Given an array a[] of size n. For every i from 0 to n-1,
// Output max(a[0],a[1]......a[i])

//? Keep a variable mx which stores the maximum till ith element,
//? iterate over the array and update,
#include <iostream>
using namespace std;
int main()
{
    int mx = -19999;
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx=max(mx,a[i]);
        cout<<mx<<endl;
    }
}