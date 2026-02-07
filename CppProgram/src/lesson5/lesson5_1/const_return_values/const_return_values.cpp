#include <iostream>

// it is also not recommeded to return a constant value
const int getValue()
{
    return 5;
}

int main()
{
    std::cout<<getValue()<<'\n';

    return 0;
}