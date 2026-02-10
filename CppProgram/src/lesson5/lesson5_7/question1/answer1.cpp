#include <iostream>
#include <string>

int main()
{
    std::cout<< "Enter your full name: ";
    std::string name {};
    std::getline(std::cin>>std::ws, name);

    std::cout<<"Enter your age: ";
    int age {};
    std::cin>>age;


    // age is signed, and name.length() is unsigned, we should not mix these
    // convert name.length() to a signed value
    int nameLength {static_cast<int>(name.length())};
    std::cout<<"Your age + length of name is: "<<nameLength+age<<'\n';

    return 0;
}