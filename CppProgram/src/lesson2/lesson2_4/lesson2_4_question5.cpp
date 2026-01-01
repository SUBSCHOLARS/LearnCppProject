#include <iostream>

int getValueFromUser()
{
    std::cout<<"Enter an integer: ";
    int input {};
    std::cin>>input;
    return input;
}

int doubleNumber(int num)
{
    return num*2;
}

int main()
{
    int num {getValueFromUser()};
    std::cout<<"Double number is: "<<doubleNumber(num)<<'\n';
}