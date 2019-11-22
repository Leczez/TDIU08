#include <iostream>
#include <iomanip>
using namespace std;

  void Clear_Trash()
    {
      string trash{};
      getline(cin,trash);
    }

int main()
{
  int number;
  double number2;
  char character{};
  string word{};


  cout << "Skriv in ett heltal: ";
  cin >> number;
  cin.ignore(1000, '\n');

  cout << "Du skrev in heltalet: " << number << endl;

  cout << "Skriv in 5 heltal: ";
  cin >> number;
  cout << "Du skrev in heltalen: " << number;
  for(int i{}; i < 4; i++)
  {
    cin >> number;
    cout << " " << number;
  }
  Clear_Trash();
  cout << endl;

  cout << "Skriv in ett flyttal: ";
  cin >> number2;
  cout << "Du skrev in flyttalet: " << fixed << setprecision(3) << number2 << endl;
  Clear_Trash();

  cout << "Skriv in ett heltal och ett flyttal: ";
  cin >> number >> number2;
  cout << "Du skrev in heltalet: " << setw(8) << number << "\n" << flush;
  cout << "Du skrev in flyttalet: " << fixed << setw(7) << setprecision(4) << number2 << endl;
  Clear_Trash();

  cout << "Skriv in ett flyttal och ett heltal: ";
  cin >> number2 >> number;
  cout << "Du skrev in heltalet:" << setfill('-') << setw(10) << number << endl;
  cout << "Du skrev in flyttalet:" << fixed <<setprecision(4) << setfill('-') << setw(9) << number2 << endl;
  Clear_Trash();

  cout << "Skriv in ett tecken: ";
  cin >> character;
  cout << "Du skrev in tecknet: " << character << "\n" <<flush;
  Clear_Trash();

  cout << "Skriv in ett ord: ";
  cin >> word;
  cout << "Du skrev in ordet: " << word << endl;
  Clear_Trash();

  cout << "Skriv in ett heltal och ett ord: ­";
  cin >> number >> word;
  cout << "Du skrev in talet |" << number << "| och ordet |" << word << "|." << endl;
  Clear_Trash();

  cout << "Skriv in ett tecken och ett ord: ";
  cin >> character >> word;
  cout << "Du skrev in " << '"' << word << '"' << " och " << "'" << character << "'." << endl;
  Clear_Trash();

  cout << "Skriv in ett ord och ett tecken: ";
  cin >> word >> character;
  cout << "Du skrev in " << '"' << word << '"' << " och " << "'" << character << "'." << endl;
  Clear_Trash();

  cout << "Skriv in en textrad: ";
  getline(cin,word);
  cout << "Du skrev in " << '"' << word << '"' << '.' << endl;

  cout << "Skriv in en till textrad: ";
  getline(cin,word);
  cout << "Du skrev in " << '"' << word << '"' << '.' << endl;


  cout << "Skriv in en rad med tre ord: ";
  cin >> word;
  cout << "Du skrev in: " << '"' << word << '"' << ", ";
  cin >> word;
  cout << '"' << word << '"' << " och ";
  cin >> word;
  cout << '"' << word << '"' << '.' << endl;

  return 0;
}
