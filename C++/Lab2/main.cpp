#include <iostream>
#include <iomanip>
using namespace std;

int N_faculty(int const n)
{
  if(n == 1)
  {
    return n;
  }else
  {
    return n * N_faculty(n-1);
  }
}

void Clear_Trash();

double Add_Int_Double(int Number1, double Number2);
double Add_Double_Int(double Number1, int Number2);
void swap(double &number1, int &number2);

int Get_Choice()
{
  int choice{};

  cout << "1. Beräkna N-fakultet" << endl;
  cout << "2. Addera 2 Heltal" << endl;
  cout << "3. Addera ett Heltal med ett Flyttal" << endl;
  cout << "4. Addera ett Flyttal med ett Heltal" << endl;
  cout << "5. Addera 2 Flyttal" << endl;
  cout << "6. Byta värde på ett Heltal och ett Flyttal" << endl;
  cout << "7. Avsluta programmet" << endl;
  cout << "Skriv in vilken operation du vill utföra: ";
  cin >> choice;

  return choice;
}

double Add_2_Numbers(double Number1, double Number2);

int Add_Int(int number1, int number2);

int main()
{

  bool run{true};
  int choice{};
  int integer1{};
  int integer2{};
  int summa{};
  double summa1{};
  double double1{};
  double double2{};

  while(run)
  {
    choice = Get_Choice();

    switch (choice)
    {
      case 1:
        cout << "Skriv in talet som ska N-fakulteras: ";
        cin >> integer1;
        summa = N_faculty(integer1);
        cout << "Fakulteten för " << integer1 << " är = " << summa << endl;
        break;
      case 2:
        cout << "Skriv in talen som ska adderas: ";
        cin >> integer1 >> integer2;
        summa = Add_Int(integer1, integer2);
        cout << "Summan av talen är: " << summa << endl;
        break;
      case 3:
        cout << "Skriv in talen som ska adderas: ";
        cin >> integer1 >> double2;
        summa1 = Add_Int_Double(integer1, double2);
        cout << "Summan av talen är: " << summa1;
        break;

      case 4:
        cout << "Skriv in talen som ska adderas: ";
        cin >> double1 >> integer1;
        summa1 = Add_Double_Int(double1, integer1);
        cout << "Summan av talen är: " << summa1;
        break;

      case 5:
        cout << "Skriv in talen som ska adderas: ";
        cin >> double1 >> double2;
        summa1 = Add_2_Numbers(double1, double2);
        cout << "Summan av talen är: " << summa1 << endl;
        break;
      case 6:
        cout << "Skriv in ett Heltal och ett Flyttal: ";
        cin >> integer1 >> double1;
        swap(double1, integer1);
        cout << "Resultatet är: " << integer1 << " " << double1;

        break;
      case 7:
        run = false;
        break;
    }
    cout << endl;
    Clear_Trash();

  }

  return 0;
}

void swap(double &number1, int &number2)
{
  double buffer{};
  buffer = number1;
  number1 = number2;
  number2 = buffer;
}

void Clear_Trash()
  {
    string trash{};
    getline(cin,trash);
  }

double Add_Int_Double(int Number1, double Number2)
{
  return Number1 + Number2;
}
double Add_Double_Int(double Number1, int Number2)
{
  return Number1 + Number2;
}

int Add_Int(int number1, int number2)
{
  return number1 + number2;
}


double Add_2_Numbers(double Number1, double Number2)
{
  return Number1 + Number2;
}
