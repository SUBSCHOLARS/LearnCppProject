#include <iostream>

int main()
{
    char ch {97};

    std::cout<<ch<<" has value "<<static_cast<int>(ch)<<'\n';
    return 0;
}