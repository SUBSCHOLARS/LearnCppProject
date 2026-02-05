#include <cstdint>
#include <iostream>

int main()
{
    std::int8_t myInt {65};
    std::cout<<myInt<<'\n'; // this will output A most likely because it is interpreted as char
    std::cout<<static_cast<int>(myInt)<<'\n';

    return 0;
}