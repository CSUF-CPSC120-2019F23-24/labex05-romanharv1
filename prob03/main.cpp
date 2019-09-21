// Random Rectangle

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

int main()
{

// Defining maximum value for random variable.
  const int MAX_LENGTH = 40;

// Creating pool for random variables.
  unsigned seed = time(0);
  srand(seed);

  // Defining random variable.
  int num;
  num = rand() % MAX_LENGTH + 1;

  // Assigning the random variable to an amount of #'s.
  std::string eq;
  eq.assign(num, '#');

  // Printing rectangle.
  std::cout << eq << std::endl;
  std::cout << eq << std::endl;
  std::cout << eq << std::endl;

  return 0;
}
