#include <iostream>

int main()
{
    std::cout<<"Joe\n";
    #if 0 // Don't compile anything starting here
        std::cout<<"Bob\n";
        std::cout<<"Steve\n";
    #endif // Until this point
}