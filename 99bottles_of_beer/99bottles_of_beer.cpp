# include <iostream>

int main()
{
    int i = 0;

    for (i = 99; i >= 1; i--)
    {
        std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
        std::cout << "Take one down and pass it around, " << i - 1 << " bottles of beer on the wall.\n";
    }
}