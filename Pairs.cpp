#include <iostream>
using namespace std;
void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second<<endl;
    pair<int, pair<int, int>> q = {1, {3, 4}}; //nested property of pair
    cout << p.first << " " << q.second.second << " " << q.second.first;
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second;
}
int main()
{explainPair();
}