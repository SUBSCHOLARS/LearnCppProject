#include <iostream>

void doPrint()
{
    std::cout<<"In doPrint()\n";
}

int main()
{
    std::cout<<"Starting main()\n";
    doPrint();                      // Interrupt main() by making a function call to doPrint(). main() is the caller.
    std::cout<<"Ending main()\n";   // This statement is executed after doPrint() ends
    return 0;
}