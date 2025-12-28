#include <iostream>

void doNothing(int&)
{

}

int main()
{
    // define an integer variable named x
    int x;

    doNothing(x); // pass x to a function that does nothing

    // print the value of x to the screen, it may show the warning
    std::cout<<x<<'\n';

    return 0;
}