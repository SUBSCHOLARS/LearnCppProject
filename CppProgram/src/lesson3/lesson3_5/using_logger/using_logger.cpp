#include <plog/Log.h> // Step1: include the logger headers
#include <plog/Initializers/RollingFileInitializer.h>
#include <iostream>

int getUserInput()
{
    PLOGD << "getUSerInput() called"; // PLOGD is defined by the plog library
    std::cout<<"Enter a number: ";
    int x {};
    std::cin>>x;
    return x;
}
int main()
{
    plog::init(plog::debug, "Logfile.txt"); // Step2: initalize the logger
    PLOGD<<"main() called"; // Step3: Output to the log as if you were writing to the console

    int x {getUserInput()};
    std::cout<<"You entered: "<<x<<'\n';

    return 0;
}