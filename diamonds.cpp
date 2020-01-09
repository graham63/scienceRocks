// Print a diamond with asterisks

#include <iostream>
using namespace std;

int main()
{
  int side_length = 5,  // Number of asterisks on each side
      spaces;	    // determines number of spaces printed

    spaces = side_length; // number of spaces on first line

  // Main loop for top half. Ends when rows = input entered
  for (int i = 0; i < side_length; i++)
  {
    // prints spaces to the left of the asterisks
    for (int j = 0; spaces > j; j++)
    {
      cout << " ";
    }

    spaces--;   // decrements spaces so one less space prints each iteration

		// prints one additional asterisk each iteration
    for (int j = 0; j < 2 * i - 1; j++)
    {
      cout << "*";
    }

    cout << endl;
  }

  // number of spaces on first printed line of lower half
  spaces = 0;

  // main loop for lower half. ends when j == user input - 1
  for (int i = 0; i < side_length; i++)
  {
    // prints spaces to the left of the astersisks
    for (int j = 0; spaces > j; j++)
    {
      cout << " ";
    }

    spaces++; // increments to print an additional space each iteration

    // prints one less asterisk each iteration
    for (int j = 0; j < 2 * (side_length - i) - 1; j++)
    {
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}
