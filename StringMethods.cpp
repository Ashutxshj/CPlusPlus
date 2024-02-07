#include <iostream>
using namespace std;
int main(
    string name;
    cout << "Enter your name: ";
    getline(cin,name);

    if(name.length()>12){
        cout<<"Your name cant be over 12 characters long";
    }
    else{
        cout << "Welcome";
    }
    return 0;
)