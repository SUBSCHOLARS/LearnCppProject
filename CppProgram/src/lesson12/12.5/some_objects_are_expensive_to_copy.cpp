#include <iostream>
#include <string>

void printValue(std::string y)
{
    std::cout << y << '\n';
} // y destroyed here

int main()
{
    std::string x {"Hello, world!"};

    printValue(x);

    return 0;
}