#include <iostream>

// it is not recommeded to use const parameters
// it ensures that the parameter does not change in the function.
// but the parameter is the copy, and vanishes at the end of the function, so we do not care about that.
void printInt(const int x)
{
    std::cout<<x<<'\n';
}

int main()
{
    printInt(5);
    printInt(6);

    return 0;
}