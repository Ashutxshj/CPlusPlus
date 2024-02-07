#include <iostream>
int main()
//! Types of Data Types
//? 1. Primitive :- Integer,Float,Character,Boolean
//? 2. Derived :- Function,Array,Pointer,Reference
//? 3. User-derived :- Class,Structure,Union,Enum

//! Size of Data Types
//? 1. Char - 1 byte
//? 2. Int - 2 byte or 4 bytes           Range = 0 to 2^32 -1
/*
A signed integer is a 32-bit datum that encodes an integer in the range
[-2147483648 to 2147483647].
An unsigned integer is a 32-bit datum that encodes a nonnegative integer in the
 range [0 to 4294967295].*/

//? 3. Float - 4 bytes
/*
Upto 7 decimal digits
*/
//? 4. Double - 8 bytes

//! Types of Modifiers
//? 1. Signed - 4 bytes            For string -127 to 127.
//? 2. Unsigned - 4 bytes          For string 0 to 255.
//? 3. Long - 8 bytes
//? 4. short - 2 bytes            Range: -32768 to 32767

{
    // integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7.5;

    // double(number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // single character
    char grade = 'A';
    char initial = 'BC'; // single only

    // boolean (true or false)
    bool student = true;
    bool power = true;
    bool forSale = false;

    // string (objects that represents a sequence of text)
    std::string name = "Bro";

    std::cout << name << '\n'; // standard output

    // string literal
    std::cout << "Hello " << name << '\n';

    std::cout << "You are " << age << " years old" << '\n';

    std::cout << days << '\n'; // '\n' for space
    std::cout << price << '\n';
    std::cout << initial;
    return 0;
}
