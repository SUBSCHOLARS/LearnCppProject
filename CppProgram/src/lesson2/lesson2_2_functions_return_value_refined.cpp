#include <iostream>

int returnFive()
{
    return 5;
}

int main()
{
    std::cout<<returnFive()<<'\n';
    std::cout<<returnFive()+2<<'\n';

    // 5が値として返ってくるがmain関数はそれに際して特に何もしないので、無視される。
    returnFive();

    return 5;
}