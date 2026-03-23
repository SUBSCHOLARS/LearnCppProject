#include <iostream>
#include <string>
#include <string_view>

std::string getName(int num, std::string name)
{
    std::cout<<"Enter the name of person #"<<num<<": ";
    std::getline(std::cin>>std::ws, name);
    return name;
}

void printOlder(int age1, int age2, std::string_view name1, std::string_view name2)
{
    if(age1>age2)
    {
        std::cout<<name1<<" (age "<<age1<<") "<<"is older than "<<name2<<" (age "<<age2<<").\n";
    }
    else if(age1<age2)
    {
        std::cout<<name2<<" (age "<<age2<<") "<<"is older than "<<name1<<" (age "<<age1<<").\n";
    }
    else
    {
        std::cout<<"Their age is equal.\n";
    }
}

int main()
{
    std::string name1 {};
    std::cout<<"Enter the name of person #1: ";
    std::getline(std::cin>>std::ws,  name1);

    int age1 {};
    std::cout<<"Enter the age of "<<name1<<": ";
    std::cin>>age1;

    std::string name2 {};
    std::cout<<"Enter the name of person #2: ";
    std::getline(std::cin>>std::ws,  name2);

    int age2 {};
    std::cout<<"Enter the age of "<<name2<<": ";
    std::cin>>age2;

    printOlder(age1, age2, name1, name2);
}