#include <iostream>
using namespace std;

int main()
{
  int side_length,  // Number of asterisks on each side
      line_counter, // counter for main loop
      counter,	    // counter for inner loops
      spaces;	    // determines number of spaces printed


  cout << "Please enter a number (two or larger):"<< endl;
  cin  >> side_length;

  cout << endl;

    spaces = side_length - 1; // number of spaces on first line

  // Main loop for top half. Ends when rows = input entered
  for (line_counter = 1; line_counter <= side_length; line_counter++)
  {
    // prints spaces to the left of the asterisks
    for (counter = 1; spaces >= counter; counter++)
    {
      cout << " ";
    }

    spaces--;   // decrements spaces so one less space prints each iteration

		// prints one additional asterisk each iteration
    for (counter = 1; counter <= 2 * line_counter - 1; counter++)
    {
      cout << "*";
    }

    cout << endl;
  }

  // number of spaces on first printed line of lower half
  spaces = 1;

  // main loop for lower half. ends when counter == user input - 1
  for (line_counter = 1; line_counter <= side_length - 1; line_counter++)
  {
    // prints spaces to the left of the astersisks
    for (counter = 1; spaces >= counter; counter++)
    {
      cout << " ";
    }

    spaces++; // increments to print an additional space each iteration

    // prints one less asterisk each iteration
    for (counter = 1; counter <= 2 * (side_length - line_counter) - 1; counter++)
    {
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}
