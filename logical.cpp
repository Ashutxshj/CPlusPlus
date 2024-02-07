#include <iostream>
using namespace std;
int main()
{
    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // ! = reverses the logical state of its operand

    int temp;
    cout << "Enter the Temperature: ";
    cin >> temp;

    if(temp>0 && temp <30){
        cout << "The temperature is good";
    }
    else{
        cout<<"The temperature is bad";
    }
    return 0;
}