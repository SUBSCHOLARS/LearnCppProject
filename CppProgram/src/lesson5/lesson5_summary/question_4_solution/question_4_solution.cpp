#include <iostream>
#include <string>
#include <string_view>

std::string getName(int num)
{
    std::string name {};
    std::cout<<"Enter the name of person #"<<num<<": ";
    std::getline(std::cin>>std::ws, name);
    return name;
}

int getAge(std::string_view name)
{
    int age {};
    std::cout<<"Enter the age of "<<name<<": ";
    std::cin>>age;

    return age;
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
    // constを付加するためには、関数に切り出す必要がある。（宣言時に初期化しないといけないため）
    const std::string name1 {getName(1)};
    const int age1 { getAge(name1)};

    const std::string name2 {getName(2)};
    const int age2 { getAge(name2) };

    printOlder(age1, age2, name1, name2);

    return 0;
}