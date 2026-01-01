#include <iostream>

int main()
{
    int x;
    int y, z;

    int width{5};

    std::cout<<width;
    width=7;
    std::cout<<width;

    // default initialization
    int a;
    // traditional initialization forms
    int b=5; // copy initialization (initial value after equals sign)
    int c(6); // direct initialization(initial value in parenthesis)
    // modern initialization forms(preferred)
    int d{7}; // direct list initialization(initial value in braces)
    int e{}; // value initialization(empty braces)

    // これはコンパイルエラーとなる
    // int w1 {4.5};


    // これらは暗黙的に小数点以下を切り捨ててコンパイルを通してしまう
    // int w2=4.5;
    // int w3 (4.5);
    return 0;
}