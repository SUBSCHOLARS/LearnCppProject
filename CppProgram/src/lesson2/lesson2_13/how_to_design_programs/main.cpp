#include <iostream>

// Full implementation of the getUserInput function
int getUserInput()
{
    std::cout<<"Enter an integer: ";
    int input{};
    std::cin>>input;

    return input;
}
char getMathematicalOperation()
{
    std::cout<<"Enter an operation: ";
    char operation{};
    std::cin>>operation;
    return operation;
}
int calculateResult(int value, char operation, int second_value)
{
    int calculatedResult{};
}

int main()
{
    // Get first number from user
    int value{getUserInput()};
    std::cout<<value<<'\n';

    // Get mathematical operation from user
    char operation{getMathematicalOperation()};
    std::cout<<operation<<'\n';

    // Get second number from user
    int second_value {getUserInput()};
    std::cout<<second_value<<'\n';

    // Calculate result
    // calculateResult();

    // Print result
    // printResult();

    return 0;
}