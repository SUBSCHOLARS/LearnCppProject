#include <string> // allows use of std::string

int main()
{
    std::string name {}; // emptry string

    std::string name2 {"Alex"}; // initialize name with string literal "Alex"
    name2="John"; // change name to "John"

    std::string myID {"45"}; // "45" is not the same as integer 45!

    return 0;
}