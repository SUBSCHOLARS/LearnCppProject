#include <iostream>

// function declaration includes return type, name, parameters, and semicolon, No function body!
int add(int x, int y);
// it can also looks like this
int add_another(int, int);

int main()
{
    std::cout<<"The sum of 3 and 4 is: "<<add(3,4)<<'\n'; // this works because we forward declared add() above
    return 0;
}
int add(int x, int y)
{
    return x+y;
}