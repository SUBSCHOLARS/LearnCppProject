#include <iostream>

int main()
{
    int x {5};
    int y {6};

    int& ref {x};

    ref=y;

    std::cout<<x<<'\n'; // expected 5, but print 6
    return 0;
}