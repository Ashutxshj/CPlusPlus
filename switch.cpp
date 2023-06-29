// switch = alternative to using many "else if" statements
//            compare one value against matching cases
#include <iostream>
int main()
{
    int month;
    std::cout << "Enter the month(1-12):";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "It is January";
        break;
    case 2:
        std::cout << "It is February";
        break;
    case 3:
        std::cout << "It is March";
        break;
    case 4:
        std::cout << "It is April";
        break;
    case 5:
        std::cout << "It is May";
        break;
    case 6:
        std::cout << "It is June";
        break;
    default:
        std::cout << "Please enter in only numbers";
    }

    return 0;
}