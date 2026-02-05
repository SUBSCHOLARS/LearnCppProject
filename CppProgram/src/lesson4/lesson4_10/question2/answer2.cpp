#include <iostream>

bool isPrime(int x)
{
    if(x==2) return true;
    else if(x==3) return true;
    else if(x==5) return true;
    else if(x==7) return true;

    return false;
}

int main()
{
    std::cout<<"Enter an integer within 0-9: ";
    int x {};
    std::cin>>x;

    if(x>9)
    {
        std::cout<<"Enter the valid value";
        return 0;
    }
    else if(x<0)
    {
        std::cout<<"Enter the valid value";
        return 0;
    }
    else
    {
        if(isPrime(x))
        {
            std::cout<<x<<" is prime\n";
        }
        else
        {
            std::cout<<x<<" is not prime\n";
        }
    }
    return 0;
}