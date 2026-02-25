#include <iostream>
#include <string>

int main()
{
    std::string name {"Alex"};
    std::cout<<"My name is: "<<name<<'\n';

    // empty strings will print nothing
    std::string empty {};
    std::cout<<'['<<empty<<']'<<'\n';
    return 0;
}