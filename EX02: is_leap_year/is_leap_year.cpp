#include <iostream>

int main() 
{
  	int year = 0;

  	std::cout << "Please enter the year here --> ";
  	std::cin >> year;

	if(year < 1000 || year > 9999)
  	{
	  	std::cout << "\n!!Wrong date!!\n";
	}

	else if (year >= 1000 || year <= 9999)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			std::cout << year << " Its a leap year\n";
		else
			std::cout << year << " Its not a leap year\n";
	}
}
