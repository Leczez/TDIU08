#include <iostream>
#include <iomanip>

using namespace std;

  int starting_value{};
  int final_value{};

  int celsius{};
  int kelvin{};
  int fahrenheit{};
  int reaumur{};

int main()
{
  cout << "Ange startvärde:  ";
  cin >> starting_value;

  for(;;)
  {
    cout << "Ange slutvärde:   ";
    cin >> final_value;
    if(final_value >= starting_value)
    {
      break;
    }else
    {
     cout << "Felaktigt slutvärde!" << endl;
    }
  }






  return 0;
}
