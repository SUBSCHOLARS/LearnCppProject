#include <cassert> // for asser
#include <cstdint> // for std::int64_t
#include <iostream>
#include <limits> // for std::numeric_limits

constexpr std::int64_t powint_safe(std::int64_t base, int exp)
{
    assert(exp >= 0 && "powint_safe: exp parameter has negative value");

    // Handle 0 case
    if(base == 0)
    {
        return (exp == 0) ? 1 : 0;
    }
    std::int64_t result {1};

    // To make the range checks easier, we';; ensure base is positive
    // We'll flip the result at the end if needed
    bool negativeResult {false};
    if(base < 0)
    {
        base = -base;
        negativeResult = (exp & 1);
    }
    while(exp > 0)
    {
        if(exp & 1)
        {
            if(result > std::numeric_limits<std::int64_t>::max() / base)
            {
                std::cerr<<"point_safe(): result overflowed\n";
                return std::numeric_limits<std::int64_t>::max();
            }
            result *= base;
        }
        exp /= 2;
        if(exp <= 0)
        {
            break;
        }
        if(base > std::numeric_limits<std::int64_t>::max() / base)
        {
            std::cerr<<"powint_safe(): base overflowed\n";
            return std::numeric_limits<std::int64_t>::max();
        }
        base *= base;
    }
    return negativeResult ? -result : result;
}

int main()
{
    std::cout<<powint_safe(7, 12)<<'\n';
    std::cout<<powint_safe(70, 12)<<'\n';
    std::cout<<powint_safe(-7, 11)<<'\n';

    return 0;
}

