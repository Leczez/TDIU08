#include <iostream>
#include <iomanip>

using namespace std;


  void printtable(int celsius, int kelvin, int fahrenheit, int reaumur, int starting_value, int final_value)
  {
    cout << "Celsius     Kelvin  Farenheit   Réaumur" << endl
         << "---------------------------------------" << endl;
    for(int i = starting_value; i < final_value; i++)
    {
      
      cout << celsius << "     " << kelvin << "      " << fahrenheit << "      " << reaumur << endl;
    }


  }

  int starting_value{};
  int final_value{};

  int celsius{0};
  double kelvin{};
  int fahrenheit{};
  int reaumur{};

int main()
{
  cout << "Ange startvärde:  ";
  cin >> starting_value;

  bool Q{true};
  while(Q)
  {
    cout << "Ange slutvärde:   ";
    cin >> final_value;
    if(final_value <= starting_value)
    {
      cout << "Felaktigt slutvärde!" << endl;
    } else
    {
      Q = false;
    }
  }
  cout << "celsius     kelvin  Farenheit   Réaumur" << endl;
  cout << "---------------------------------------" << endl;
  while(celsius <= final_value)
  {
      kelvin = celsius + 273.15;
      cout << setw(7) << celsius << setw(11) << kelvin << endl;
      celsius++;
  }





  return 0;
}
