#include <iostream>


using namespace std;
int main()
{

int number;

cout << "Please type in a number: ";
cin >> number;
cout << "You typed in the number: " << number << "\n" << flush;

cout << "Please type in 5 numbers: ";
cin >> number;
cout << "You typed in the numbers: " << number;
for(int i{}; i < 4; i++)
  {
    cin >> number;
    cout << " " << number;
  }







  return 0;
}
