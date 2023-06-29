#include <iostream>
#include <string>
using namespace std;
int main()
{
    class Employee
    {
    public:
        string name;
        int salary;

        Employee(string name, int salary, int sp)
        {
            this->name = name;
            this->salary = salary;
            this->secretPassword = sp;
        } // constructor

        void printDetails()
        {
            cout << "bruh" << endl;
        }

        void getSecretPassword()
        {
            cout << "The secret password of employee is " << this->secretPassword;
        }

    private: // cant access private variable
        int secretPassword;
    };
    Employee har("harry", 343, 242242);
    har.printDetails();
    har.getSecretPassword();//cant do cout<<har.secretPassword;
    return 0;
}