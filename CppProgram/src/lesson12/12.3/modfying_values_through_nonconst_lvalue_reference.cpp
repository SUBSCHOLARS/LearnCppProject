#include <iostream>

int main()
{
    int x {5};
    int& ref {x};

    std::cout<<x<<ref<<'\n'; // print 55

    x=6;

    std::cout<<x<<ref<<'\n'; // print 66

    ref=7;

    std::cout<<x<<ref<<'\n'; // print 77

    return 0;
}