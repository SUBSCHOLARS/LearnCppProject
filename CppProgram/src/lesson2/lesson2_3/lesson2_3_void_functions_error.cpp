#include <iostream>

void printHi()
{
    std::cout<<"Hi"<<'\n';
}

int main()
{
    // this is fine
    printHi();
    // compile error because printHi does not have return type
    // std::cout<<printHi();
}