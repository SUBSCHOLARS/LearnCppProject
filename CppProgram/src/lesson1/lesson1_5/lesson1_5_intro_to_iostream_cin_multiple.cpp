#include <iostream>

int main()
{
    // there has to be a white space, otherwise the program will be broken
    std::cout<<"Enter two numbers separated by a space: ";

    int x{};
    int y{};
    std::cin>>x>>y;

    std::cout<<"You entered "<<x<<" and "<<y<<"\n";
    return 0;
}