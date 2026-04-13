#include <iostream>

int getNumber()
{
    std::cout<<"Enter an integer: ";
    int x {};
    std::cin >> x;
    return x;
}

constexpr bool isEven(int num)
{
    return num%2 == 0;
}

int main()
{
    int number {getNumber()};
    if(isEven(number))
    {
        std::cout<<number<<" is even.\n";
    }
    else
    {
        std::cout<<number<<" is odd.\n";
    }
}