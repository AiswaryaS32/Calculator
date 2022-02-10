#include <iostream>
#include<math.h>
using namespace std;

int
main ()
{
  float x, y;
  int n;

  cout << "Enter: \n";
  cout << "1 for Addition\n";
  cout << "2 for Substraction\n";
  cout << "3 for Multiplication\n";
  cout << "4 for Division\n";

  cin >> n;

  if (n == 1)
    {
      cout << "Enter any two numbers for addition:\n";
      cin >> x >> y;
      cout << "The sum is " << x + y;
    }

  else if (n == 2)
    {
      cout << "Enter any two numbers for substraction:\n";
      cin >> x >> y;
      cout << "The difference is " << x - y;
    }

  else if (n == 3)
    {
      cout << "Enter any two numbers for multiplication:\n";
      cin >> x >> y;
      cout << "The product is " << x * y;
    }

  else if (n == 4)
    {
      cout << "Enter any two numbers for division:\n";
      cin >> x >> y;
      cout << "The quotient is " << x / y;
    }

  else
    {
      cout << "Invalid request";
    }

  return 0;
}
