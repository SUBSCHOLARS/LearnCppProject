#include <iostream>
int readNumber()
{
    std::cout<<"Enter an integer: ";
    int input{};
    std::cin>>input;

    return input;
}
void writeAnswer(int num)
{
    std::cout<<"The added value is: "<<num<<'\n';
}

int main()
{
    int num_1{readNumber()};
    int num_2{readNumber()};

    int added_num=num_1+num_2;

    writeAnswer(added_num);
    return 0;
}