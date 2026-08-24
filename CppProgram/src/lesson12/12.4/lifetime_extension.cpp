#include <iostream>

int main()
{
    const int& ref {5};

    std::cout << ref << '\n';

    return 0;
} // Both ref and temporary object die here