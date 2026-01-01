#include <iostream>

int doubleNumber(int num)
{
    return num*2;
}

int main()
{
    int num {3};
    std::cout<<doubleNumber(num)<<'\n';
}