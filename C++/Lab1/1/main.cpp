#include <iostream>
#include <iomanip>

using namespace std;

  void Clear_Trash()
  {
    string trash{};
    getline(cin,trash);
  }

  void printtable(double starting_value, double final_value)
  {
    double celsius{starting_value};
    double kelvin{};
    double fahrenheit{};
    double reaumur{};

    cout << "Celsius     Kelvin  Farenheit   Réaumur" << endl
         << "---------------------------------------" << endl;
    for(int i = starting_value; i <= final_value; i++)
    {
      kelvin = celsius + 273.15;
      fahrenheit = celsius * 1.8 + 32;
      reaumur = celsius * 0.8;
      cout << setw(7) << setprecision(0) << celsius << fixed << setprecision(2) << setw(11) << kelvin << setw(11) << fahrenheit << setw(10) << reaumur << endl;
      celsius++;
    }


  }

  double starting_value{};
  double final_value{};

int main()
{
  cout << "Ange startvärde:  ";
  cin >> starting_value;
  Clear_Trash();

  for(;;)
  {
    cout << "Ange slutvärde:   ";
    cin >> final_value;
    Clear_Trash();
    if(final_value <= starting_value)
    {
      cout << "Felaktigt slutvärde!" << endl;
    }
    else
    {
      break;
    }
  }
  printtable(starting_value,final_value);

  return 0;
}
