/*
An arithmetic array is an array that contains at least two integers
and the difference between consecutive intgers are equal.
Ex:-[9,10],[3,3,3] and [9,7,5,3]

From an array of N non-negative integers,find a contiguous arithmetic subarray
that has the maximum length.


Ex:- {10,7,4,6,8,10,11}
       -3,-3,2,2,2,1

       {4,6,8,10}
          2,2,2

          Hence answer=4
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 2;
    int pd = a[1] - a[0]; // previous common diff
    int j = 2;
    int curr = 2; // current common diff

    while (j < n)
    {
        if (pd == a[j] - a[j - 1])
        {
            curr++;
        }
        else
        {
            pd = a[j] - a[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans << endl;
}