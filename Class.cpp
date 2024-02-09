#include <iostream>
using namespace std;
class student
{
public: // default Private
    string name;
    int age;
    bool gender;

    void printInfo()
    {
        cout << "----------PRINTING THE STUDENT DETAILS---------" << endl;
        cout << "Name =";
        cout << name << endl;
        cout << "Age =";
        cout << age << endl;
        cout << "Gender =";
        cout << gender << endl;
    }
};
int main()
{
    // student a;
    // a.name ="Ashu";
    // a.age=19;
    // a.gender=1;

    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Name = ";
        cin >> arr[i].name;
        cout << "Age = ";
        cin >> arr[i].age;
        cout << "Gender = ";
        cin >> arr[i].gender;
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }
}