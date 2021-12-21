#include <iostream>

int main() 
{ 
  double mass;
  double massonplanet;
  int p_number;
  
  std::cout << "Please enter your weight on earth: ";
  std::cin >> mass;
  std::cout << "\nI have information for the following planets:\n\n";
  std::cout << "   1. Venus   2. Mars    3. Jupiter\n";
  std::cout << "   4. Saturn  5. Uranus  6. Neptune\n\n";
  std::cout << "\nPlease select the number planet your fighting on: ";
  std::cin >> p_number;

  switch(p_number)
  {
    case 1:
      massonplanet = mass * 0.38;
    case 2:
      massonplanet = mass * 0.91;
    case 3:
      massonplanet = mass * 0.38;
    case 4:
      massonplanet = mass * 2.34;
    case 5:
      massonplanet = mass * 1.06;
    case 6:
      massonplanet = mass * 0.92;
    case 7:
      massonplanet = mass * 1.19;
  }
  std::cout << "\nYour weight on your selected planet is: " << massonplanet << "\n";
}
