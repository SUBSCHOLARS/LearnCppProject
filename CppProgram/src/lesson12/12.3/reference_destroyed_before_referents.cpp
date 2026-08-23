#include <iostream>

int main()
{
    int x {5};

    {
        int& ref {x};
        std::cout<<ref<<'\n';
    } // ref(reference) is destroyed here

    std::cout<<x<<'\n';

    return 0;
} // x(referent) is destroyed here