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
