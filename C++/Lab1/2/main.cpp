#include <iostream>
#include <iomanip>

using namespace std;

  int counter{};

  string Get_Data()
  {
    char buffer{};
    string text{};


    cout << "Mata in texten:" << endl;
    while(cin.get(buffer))
    {
      if(buffer = '\n'){

      }
      else
      {
        cout << "buffer = " << buffer << endl;
        //cout << buffer << endl;
        text.append(1,buffer);
        //cout << text << endl << counter << endl;
      } counter++;

    }

    return text;

  }



  void Analyze_Data(string text)
  {


    cout << counter << endl;
  }




int main()
{

  string text{};

  text = Get_Data();
  cout << text << endl;

  Analyze_Data(text);


  return 0;
}
