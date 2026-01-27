#include <iostream>

void writeValue(int x) // void here means no return value
{
    std::cout<<"The value of x is: "<<x<<"\n";
    // no return statement, because this function doesn't return a value
    // if you use a return statement to try to return a value in such a function, a compile error will result
}