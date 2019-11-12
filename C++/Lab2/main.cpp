#include <iostream>
#include <iomanip>
using namespace std;

int N_faculty(int n)
{
  if(n == 1)
  {
    return n;
  }else
  {
    return n * N_faculty(n-1);
  }
}





int Get_Choice()
{
  int choice{};


  cout << "1. Beräkna N-fakultet" << endl;
  cout << "2. Addera 2 Heltal" << endl;
  cout << "3. Addera ett Heltal/Flyttal med ett Flyttal/Heltal" << endl;
  cout << "4. Addera 2 Flyttal" << endl;
  cout << "5. Byta värde på ett Heltal och ett Flyttal" << endl;
  cout << "6. Avsluta programmet" << endl;
  cout << "Skriv in vilken operation du vill utföra: ";
  cin >> choice;

  return choice;
}

double Add_2_Double(double Number1, double Number2)
{
  return Number1 + Number2;
}

int Add_2_Integers(int Number1, int Number2)
{
  return Number1 + Number2;
}

void Swap(int Number1, double double1)
{
  double buffer{};

  buffer = double1;
  double1 = Number1;
  Number1 = buffer;

  cout << "Heltal = " << Number1 << endl << "Flyttal = " << double1 << endl;

}

int main()
{
  int choice{};
  int integer1{};
  int integer2{};
  int summa{};
  double summa1{};
  double double1{};
  double double2{};

  choice = Get_Choice();
  while(true)
  {
    switch (choice)
    {
      case 1:
        cout << "Skriv in talet som ska N-fakulteras: ";
        cin >> integer1;
        summa = N_faculty(integer1);
        cout << "Fakulteten för " << integer1 << " är = " << summa << endl;
      case 2:
        cout << "Skriv in talen som ska adderas: ";
        cin >> integer1 >> integer2;
        summa = Add_2_Integers(integer1, integer2);
        cout << "Summan av talen är: " << summa << endl;
      case 3:
        cout << "Skriv in talen som ska adderas: ";

      case 4:
        cout << "Skriv in talen som ska adderas: ";
        cin >> double1 >> double2;
        summa1 = Add_2_Double(double1, double2);
        cout << "Summan av talen är: " << summa1 << endl;
      case 5:
        cout << "Skriv in ett Heltal och ett Flyttal: ";
        cin >> integer1 >> double1;
        Swap(integer1, double1);



      case 6:
        break;
    }
    cout << endl;
    choice = Get_Choice();
  }




  return 0;
}
