#include <iostream>
using namespace std;
// cout <<(insertion operator)
// cin >>(extraction operator)
int main()
{
    int age;
    string name;
    cout<<"What's your name?: ";
    cin >> name;

    cout<<"What's your age?: ";
    cin >> age;

    cout << "Hello " << name <<'\n';
    cout << "You are "<< age <<" years old";
}