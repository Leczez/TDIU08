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
  cout << "Skriv in vilken operation du vill göra: ";
  cin >> choice;

  return choice;
}


int main()
{
  int choice{};
  int integer{};

  choice = Get_Choice();
  while(choice != 6)
  {
    switch (choice)
    {
      case 1:
        cout << "Skriv in talet som ska N-fakulteras: ";
        cin >> integer;
        int summa = N_faculty(integer);
        cout << "Fakulteten för " << integer << " är = " << summa << endl;

    }
    cout << endl;
    choice = Get_Choice();
  }




  return 0;
}
