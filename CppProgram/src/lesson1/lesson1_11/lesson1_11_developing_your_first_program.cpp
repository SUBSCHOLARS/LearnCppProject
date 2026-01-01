#include <iostream>

int main()
{
    int number {};
    std::cout << "Enter an integer: ";
    std::cin >> number;
    int doubleNumber {2*number};
    std::cout << "Double that number is: "<< doubleNumber << '\n';

    return 0;
}