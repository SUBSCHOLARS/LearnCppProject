#include <iostream>

int getValueFromUser()
{
    std::cout<<"Enter an integer: ";
    int input{};
    std::cin>>input;
    return input; // return the value of input back to the caller
}
int main()
{
    std::cout<<getValueFromUser()<<'\n'; // where does the returned value get stored?
    // the answer is that it is stored in "temporary object"
    return 0;
}