#include <iostream>

// Return value is the integer entered by the user from the keyboard
int getValueFromUser()
{
    std::cout<<"Enter an integer: ";
    int input{};
    std::cin>>input;
    return input;
}

int main()
{
    int num{getValueFromUser()};
    std::cout<<num<<" double is: "<<num*2<<'\n';
    return 0;
}