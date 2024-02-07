#include <iostream>
int main()
{
    int students = 20;
    students = students + 1;
    students++;
    students -= 1; // syntactic sugar
    students--;    // only subs 1

    students *= 2;
    students /= 2;

    students /= 3; // as only int no decimal;change into double

    int remainder = students % 3;
    std::cout << remainder;

    // order -PEDMASS
    return 0;
}