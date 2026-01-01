#include <iostream>

// This function takes no parameters
void doPrint()
{
    std::cout<<"In doPrint()\n";
}

// This function takes one integer parameter named x
void printValue(int x)
{
    std::cout<<x<<'\n';
}

// This function has two integer parameters, one named x, and one named y
int add(int x, int y)
{
    return x+y;
}

int main()
{
    doPrint();
    printValue(6);
    add(2,3);
}