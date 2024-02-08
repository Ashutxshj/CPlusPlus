#include <iostream>
using namespace std;
// Rows = 1 to n
// Column = n+1 - Row No.
// Elements : Column No.
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}