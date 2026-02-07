#include <iostream>

int main()
{
    std::cout<<"Enter your age: ";
    int age{};
    std::cin>>age;

    const int constAge{age}; // initalizing const variable using non-const value is allowed

    return 0;
}