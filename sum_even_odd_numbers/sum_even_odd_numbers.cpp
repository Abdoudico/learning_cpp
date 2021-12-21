# include <iostream>
# include <vector>

int main()
{
    std::vector<int> numbers = {99, 102, 88, 4, 66, 6, 77, 8, 3, 5};

    int sumeven = 0;
    int sumodd = 0;
    int i = 0;

    std::cout << "The numbers are " << "\n";
    for (i = 0; i < numbers.size(); i++)
    {   
        std::cout << "       " << numbers[i] << " \n";
        if (numbers[i] % 2 == 0)
            sumeven = sumeven + numbers[i];
        else
            sumodd = sumodd + numbers[i];
    }

    std::cout << "Sum of even numbers is: " << sumeven << " \n";
    std::cout << "-------------------------\n";
    std::cout << "sum of odd numbers is: " << sumodd << " \n";
}