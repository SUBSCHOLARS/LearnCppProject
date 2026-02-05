#include <iostream>

int main()
{
    std::cout<<"Input a keyboard character: ";

    char ch {};
    std::cin>>ch;
    std::cout<<"You entered: "<<ch<<'\n';

    // Note: The following cin doesn't ask the user for input, it grabs queued input.
    std::cin>>ch;
    std::cout<<"You entered: "<<ch<<'\n';

    return 0;
}