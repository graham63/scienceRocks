// Pseudocode to print a solid diamond
// and a hollow diamond the size of which
// is specified by the user.

#include <iostream>
using namespace std;

int main()
{
  int side_length,  // Number of asterisks on each side
      line_counter, // counter for main loop
      counter,	    // counter for inner loops
      spaces;	    // determines number of spaces printed

  bool valid_data = false;  // tests for input less than 2

  cout << endl
       << "This program prints a solid diamond and a" 	<< endl
       << "hollow diamond made of asterisks. You can" 	<< endl
       << "choose how large you would like the diamond"	<< endl
       << "to be by inputting how many asterisks you"	<< endl
       << "would like on each side."		<< endl << endl;

  // Validates data and starts over if data is less than 2
  while (valid_data == false)
  {
    cout << "Please enter a number (two or larger):"<< endl;
    cin	 >> side_length;

    cout << endl;

    if (side_length >= 2)
    {
      valid_data = true;
    }
    else
    {
      cout << "************************************" << endl
           <<	"*   You entered a number smaller   *" << endl
           << "*   than two. Please try again     *" << endl
           <<	"************************************" << endl;
    }
  }

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

  // number of spaces on first line
  spaces = side_length - 1;

  // Main loop for top of hollow triangle. Ends when rows == user input
  for (line_counter = 1; line_counter <= side_length; line_counter++)
  {
    // Prints spaces to the left of the diamond.
    for (counter = 1; spaces >= counter; counter++)
    {
      cout << " ";
    }

    spaces--; // decrements so one less space is printed on each line

    cout << "*"; // prints one asterisk per line on the left side of the diamond

    // prints spaces to make the center of the diamond
    for (counter = 1; counter <= 2 * line_counter - 3; counter++)
    {
      cout << " ";
    }

    //Prints one asterisk per line on the right side, except top and bottom line
    if (line_counter > 1)
    {
      cout << "*";
    }

    cout << endl;
  }

  spaces = 1; // space printed on first line on lower half

  // main loop for lower half. ends when rows == user input - 1
  for (line_counter = 1; line_counter <= side_length - 1; line_counter++)
  {
    //prints spaces to the left of diamond
    for (counter = 1; spaces >= counter; counter++)
    {
      cout << " ";
    }

    spaces++; // increments to print an additional space per line

    cout << "*";

    // prints spaces for center of diamond
    for (counter = 1; counter <= 2 * (side_length - line_counter) - 3; counter++)
    {
      cout << " ";
    }

    // prints asterisks on right side except top and bottom
    if (line_counter < side_length -1)
    {
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}
