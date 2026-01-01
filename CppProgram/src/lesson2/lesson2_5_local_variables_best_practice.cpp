#include <iostream>

int main()
{
    // the best practice of local variables definition is to define as close to their first use as reasonable
    std::cout<<"Enter an integer: ";
    int x{}; // x is defined here
    std::cin>>x; // and used here

    std::cout<<"Enter another integer: ";
    int y{}; // y is defined here
    std::cin>>y; //. and used here

    int sum {x+y}; // sum can be initialized with intended value
    std::cout<<"The sum is: "<<sum<<'\n';
    return 0;
}