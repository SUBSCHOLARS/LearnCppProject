#include <iostream>

int main()
{
    constexpr int apples {12};
    std::cout<<"You have "<<apples<<" apples. Enter how many people to divide them between: ";
    int x {};
    std::cin>>x;

    std::cout<<"Each person gets "<<apples / x <<" whole apples.\n";

    return 0;
}