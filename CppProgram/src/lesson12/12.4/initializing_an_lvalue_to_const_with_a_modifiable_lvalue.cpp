#include <iostream>

int main()
{
    int x {5}; // modifiable value
    const int& ref {x}; // ok: we can bind a const reference to a modifiable lvalue

    std::cout << ref << '\n'; // it prints 5, we can access the object through our const reference
    // ref = 7; // error, we cannot modify an object through a const reference
    x=6; // ok: x is a modifiable lvalue, we can still modify it through the original identifier
    
    return 0;
}