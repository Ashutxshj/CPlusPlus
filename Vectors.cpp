#include <iostream>
#include <vector>
using namespace std;
void explainVector()
{
    vector<int> v; // creates an empty container {}

    //? cant modify array....vector is a container dynamic in nature
    v.push_back(1);    // adds 1 in {}....{1}
    v.emplace_back(2); // faster than push_back....{1,2}

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2); // auto assumes curly braces

    vector<int> v(5); //{0,0,0,0,0}

    vector<int> v(5, 100); //{100,100,100,100,100}

    vector<int> v1(5, 20); //{20,20,20,20,20}
    vector<int> v2(v1);    // A copy of v1

    cout << v[0] << " " << v.at(0); // Access elements just like array

    vector<int>::iterator it = v.begin(); // points to the memory
    it++;
    cout << *(it) << " ";

    it = it + 2; // shifted by two positions
    cout << *(it) << " ";

    vector<int>::iterator it = v.end(); // points to somewhere after the last element
    // vector<int>::iterator it=v.rend();
    // vector<int>::iterator it=v.rbegin(); //it++ in reverse

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    for (auto it = v.begin(); it != v.end(); it++) //! automatically defines datatype
    {
        cout << *(it) << " ";
    }
    for (auto it : v)
    {
        cout << it << " ";
    }

    //? Deletion in a vector
    v.erase(v.begin() + 1);

    v.erase(v.begin() + 2, v.begin() + 4);

    vector<int> v(2, 100);
    v.insert(v.begin(), 300);
    v.insert(v.begin() + 1, 2, 10);

    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end());

    cout << v.size();

    v.pop_back();
    v1.swap(v2);
    v.clear(); //erases everything

    cout<<v.empty();
}
int main()
{
}