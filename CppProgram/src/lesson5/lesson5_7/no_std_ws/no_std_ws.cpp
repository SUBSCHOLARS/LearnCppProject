#include <iostream>
#include <string>

int main()
{
    std::cout<<"Pick 1 or 2: ";
    int choice {};
    std::cin>>choice;

    std::cout<<"Now enter your name: ";
    std::string name {};
    std::getline(std::cin, name); // without std::ws, getline() reads the leftover newline character, in this case, '\n

    std::cout<<"Hello, "<<name<<", you picked "<<choice<<'\n';
}