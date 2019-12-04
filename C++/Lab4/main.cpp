
#include "villain.h"
#include <iostream>
#include <string>

using namespace std;

vector<int> get_match_interests();

int main()
{
  char choice{};
  bool run{true};

  cout << "Welcome to the Villain Match-Maker 666!" << endl;
  vector<int> intestines{};
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
        intestines = get_match_interests();
        create_matchlist(intestines);
        break;
      case 'C':
        run = false;
        break;
      default:
        cout << "YOU SUCK!" << endl;
        break;
    }
  }
  return 0;
}

vector<int> get_match_interests()
{
  vector<int> buffer{};
  int input{};
  int counter{};
  cout << "Please enter 10 interests between 1 and 15: ";
  while(counter < 10)
  {
    cin >> input;
    if(!(input > 15 or input < 1))
    {
      buffer.push_back(input);
      counter++;
    }
    else
    {
      while(true)
      {
        cout << "Please input a interest between 1 and 15: ";
        cin >> input;
        if(!(input > 15 or input < 1))
        {
          buffer.push_back(input);
          counter++;
          break;
        }
      }
    }
  }
  return buffer;
}
