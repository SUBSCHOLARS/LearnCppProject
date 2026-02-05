#include <iostream>

int main()
{
    std::cout<<"Input a keyboad character: "; // assume the user enters "a b"

    char ch {};
    std::cin.get(ch); // extracts a, leaves " b\n" in stream
    std::cout<<"You entered: "<<ch<<'\n';

    std::cin.get(ch); //extracts space, leaves "b\n" in stream
    std::cout<<"You entered: "<<ch<<'\n';

    return 0;
}