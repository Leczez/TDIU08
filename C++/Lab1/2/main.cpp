#include <iostream>
#include <iomanip>

using namespace std;

  int counter{};

  string Get_Data()
  {
    char buffer{};
    string text{};



    for(;;)
    {
      if(cin.eof()) // kollar om end of line kommit
      {
        break;
      }
      cin >> buffer;
      cout << buffer << endl;
      text.append(1,buffer);
      cout << text << endl << counter << endl;
      counter++;
    }

    return text;

  }



  void Analyze_Data(string text)
  {


  }




int main()
{

  string text{};

  text = Get_Data();
  cout << text << endl;

  Analyze_Data(text);


  return 0;
}
