
#include "villain.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
  char choice{};
  bool run{true};

  cout << "Welcome to the Villain Match-Maker 666!" << endl;

  while(run)
  {
    cout << "Pick an option to perform: \n"
         << "   A: Input a new villain into the registry\n"
         << "   B: Find a match!\n"
         << "   C: Terminate the program :(\n"
         << "Input your choice: ";

    cin >> choice;
    switch (choice)
    {
      case 'A':
        new_villain();
      break;

      case 'B':

      break;

      case 'C':
        run = false;
      break;

    }

  }



  return 0;
}
