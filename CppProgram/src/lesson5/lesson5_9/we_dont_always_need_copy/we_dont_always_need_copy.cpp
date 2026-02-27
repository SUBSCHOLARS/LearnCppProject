#include <iostream>
#include <string>

void printString(std::string str) // str makes a copy of its initializer
{
    std::cout<<str<<'\n';
}

int main()
{
    std::string s {"Hello, world!"};
    printString(s);
    return 0;
}