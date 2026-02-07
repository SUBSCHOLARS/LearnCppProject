#include <iostream>

int main()
{
    std::cout<<5.0<<'\n'; // 5.0(no suffix) is type double(by default)
    std::cout<<5.0f<<'\n'; // 5.0f(f suffix) is type float

    float f {4.1}; // creates warning, maybe
    return 0;
}