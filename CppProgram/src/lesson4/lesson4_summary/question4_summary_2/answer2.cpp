#include <iostream>

double add(double x, double y)
{
    return x+y;
}
double subtract(double x, double y)
{
    return x-y;
}
double multiply(double x, double y)
{
    return x*y;
}
double division(double x, double y)
{
    return x/y;
}
double getDouble()
{
    std::cout<<"Enter a double value: ";
    double x {};
    std::cin>>x;
    return x;
}

int main()
{
    double x{getDouble()};
    double y{getDouble()};

    std::cout<<"Enter +, -, *. or /: ";
    char op {};
    std::cin>>op;

    std::cout<<x<<" "<<op<<" "<<y<<" is ";
    if(op=='+')
    {
        std::cout<<add(x,y)<<'\n';
    }
    else if(op=='-')
    {
        std::cout<<subtract(x,y)<<'\n';
    }
    else if(op=='*')
    {
        std::cout<<multiply(x,y)<<'\n';
    }
    else if(op=='/')
    {
        std::cout<<division(x,y)<<'\n';
    }
}