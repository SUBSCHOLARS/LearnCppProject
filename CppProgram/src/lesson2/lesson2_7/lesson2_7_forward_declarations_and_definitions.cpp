#include <iostream>
// this cannot be compiled at all!
int main()
{
    // std::cout<<"The sum of 3 and 4 is: "<< add(3,4)<<'\n';
    return 0;
}
int add(int x, int y)
{
    return x+y;
}

// this can easily be solved by replacing add function beforehand the main function
// but notice that this is no always possible
// for example, in the large program, it is hard to figure out where to replace the function
// furthermore if function A calls function B, and function B calls function A, it is logically impossible to satisfy the compiler just by replacing the location of functions