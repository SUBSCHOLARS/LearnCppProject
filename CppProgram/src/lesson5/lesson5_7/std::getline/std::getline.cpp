#include <iostream>
#include <string> // For std::string and std::getline

// std::getline() requires two arguments, the first is std::cin, and the second is your string variable
// ws stands for whitespace, std::ws input manipulator tells std::cin to igonore any leading whitespace before extraction
int main()
{
    std::cout<<"Enter your full name: ";
    std::string name {};
    std::getline(std::cin>>std::ws, name); // read a full line of text into name

    std::cout<<"Enter your favorite color: ";
    std::string color {};
    std::getline(std::cin>>std::ws, color); // read a full line of text into color

    std::cout<<"Your name is "<<name<<" and your favorite color is "<<color<<'\n';

    return 0;
}