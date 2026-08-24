int main()
{
    const int x {5};
    const int& ref {x}; // ref is told that it is referencing to const

    return 0;
}