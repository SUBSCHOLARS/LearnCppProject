#include <iostream>

int main()
{
    // std::cout allows us to print text to the console
    std::cout<<"Hello, World!";
    // not only text, but also number can be printed
    std::cout<<4;

    int x{5};
    // it also allows us to print the value of variables
    std::cout<<x;

    // to print more than one thing, the insertion operator << can be used mutiple times in a single statement
    std::cout << "Hello" << "world!";
    // now we can do like this
    std::cout << "x is equal to" << x;

    // these programs do not start a new line, here is the one which does
    std::cout<<"Hi!"<<std::endl;
    std::cout<<"My name is Alex"<<std::endl;
    // actually using std::endl is inefficient, instead we can use the newline character '\n'
    std::cout << "x is equal to "<< x << "\n";
    std::cout<<"Yep!"<<"\n";
    std::cout<<"And that's all, folks!\n";
    return 0;
}