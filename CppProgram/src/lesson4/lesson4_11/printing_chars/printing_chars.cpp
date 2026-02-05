#include <iostream>

int main()
{
    char ch1 {'a'}; // preferred
    std::cout<<ch1;

    char ch2 {98}; // not preferred
    std::cout<<ch2;

    std::cout<<'c';

    return 0;
}