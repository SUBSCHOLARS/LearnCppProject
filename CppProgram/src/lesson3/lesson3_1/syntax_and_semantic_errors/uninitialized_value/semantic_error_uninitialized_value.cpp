#include <iostream>
int main()
{
    int x; // no initializer provided
    std::cout<<x<<'\n'; // use of unitialized variable leads to undefined result
}