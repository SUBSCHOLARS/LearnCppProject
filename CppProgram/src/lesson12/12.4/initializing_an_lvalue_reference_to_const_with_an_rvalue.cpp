#include <iostream>

int main()
{
    const int& ref {5};
    std::cout<<ref<<'\n';

    return 0;
}