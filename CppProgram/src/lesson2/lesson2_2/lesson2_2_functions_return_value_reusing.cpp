#include <iostream>

int getValuesFromUser()
{
    std::cout<<"Enter an integer: ";
    int input{};
    std::cin>>input;
    return input;
}

int main()
{
    int x {getValuesFromUser()};
    int y {getValuesFromUser()};

    std::cout<<x<<" + "<<y<<" = "<<x+y<<'\n';

    return 0;
}