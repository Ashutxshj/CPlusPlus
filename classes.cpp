#include <iostream>
#include <string>
using namespace std;
int main(){
    class Employee{
        public: //public protrected private
        string name;
        int salary;

        void printDetails()
        {
            cout<<"The name of our first employee is "<<this->name<<" and his salary is $"<<this->salary<<"B"<<endl; //this class
        }
    };

    Employee har;
    har.name="Ashu";
    har.salary=100;
    har.printDetails();


    return 0;
}