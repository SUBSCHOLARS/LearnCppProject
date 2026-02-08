#include <iostream>

int main()
{
    // x is not used elsewhere in the program
    // so compiler can eliminate it
    int x {7};
    std::cout<<7<<'\n';

    return 0;
}