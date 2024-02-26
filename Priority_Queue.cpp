#include <iostream>
#include <queue>
using namespace std;
void explainPQ()
{
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << pq.top();
    pq.pop();

    cout << pq.top();

    // size swap empty function same as others

    // Minimum Heap

    //       |  2  |
    //       |  5  |
    //       |  8  |
    //       |__P__|
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << pq.top();
}