// pointer is a variable that stores address
#include <iostream>
using namespace std;
int main()
{
    int a = 34;
    int *ptra; // can store address
    ptra = &a; // address of a
    cout << "The value of a is " << a << endl;

    cout << "The value of a is " << *ptra << endl;

    cout << "The address of a is " << &a << endl;
    cout << ptra << endl;
    cout << *ptra;
    return 0;
}