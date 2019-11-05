#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
  int number;
  double number2;
/*



  cout << "Skriv in ett heltal: ";
  cin >> number;
  cout << "Du skrev in heltalet: " << number << "\n" << flush;

  cout << "Skriv in 5 heltal: ";
  cin >> number;
  cout << "Du skrev in heltalen: " << number;
  for(int i{}; i < 4; i++)
  {
    cin >> number;
    cout << " " << number;
  }
  cout << endl;


  cout << "Skriv in ett flyttal: ";
  cin >> number2;
  cout << "Du skrev in flyttalet: " << fixed << setprecision(1) << number2 << endl;
  cout << "Skriv in ett heltal och ett flyttal: ";
  cin >> number >> number2;
  cout << "Du skrev in heltalet: " << setw(8) << number << "\n" << flush;
  cout << "Du skrev in flyttalet: " << fixed << setw(7) << setprecision(4) << number2 << endl;
*/

  cout << "Skriv in ett flyttal och ett heltal: ";
  cin >> number2 >> number;
  cout << "Du skrev in heltalet: " << setfill('-') << setw(9) << number << endl;
  cout << "Du skrev in flyttalet:" << fixed <<setprecision(4) << setfill('-') << setw(9) << number2 << endl;

return 0;
}
