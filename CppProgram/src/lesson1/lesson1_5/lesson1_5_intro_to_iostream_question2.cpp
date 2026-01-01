#include <iostream>
// it will print three integer values entered by the user, separated by commas
int main()
{
    int x{}, y{}, z{};
    std::cout<<"Enther three numbers: ";
    std::cin>>x>>y>>z;
    std::cout<<"You entered "<<x<<", "<<y<<",and "<<z<<".\n";
}