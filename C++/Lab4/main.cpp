#include <iostream>
#include <string>
#include "register_handler.h"
using namespace std;

vector<int> get_match_interests();

int main()
{
  char choice{};
  bool run{true};

  cout << "Welcome to the Villain Match-Maker 666!" << endl;
  vector<int> intestines{};
  sort();
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
        cout << "get match done" << endl;
        create_matchlist(intestines);
        break;
      case 'C':
        run = false;
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
  while(true)
  {
    cin >> input;
    if(input == 0 or !(counter < 10))
    {
      break;
    }
    if(!(input > 15 or input < 0))
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
        if(!(input > 15 or input < 0))
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
