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
      if(buffer != '\n')
      {
        cout << "buffer = " << buffer << endl;
        text.append(1,buffer);
        counter++;
      }
    }

    return text;

  }


  int Amount_Of_Words(string text)
  {
    int word_count{};
    for(int i{}; i <= counter; i++)
    {
      if(text[i] == ' ' or text[i] == '\n' or (i == 0 and text[i] != '\0'))
      {
        word_count++;
      }
    }
    return word_count;
  }

  string Find_Word(string text, int i)
  {


  }

  string Shortest_Word(string text)
  {
  string short_word{};
  string temp{};

  for(int i{}; i <= counter; i++)
  {
    if(text[i] == '\n' or text[i] == ' ')
    {
      cout << "in else" << endl;
      if(short_word.empty())
      {
        cout << "is empty" << endl;
        short_word = temp;
        temp.clear();
      }else if(short_word.size() > temp.size())
      {
        cout << "Comparison" << endl;
        short_word = temp;
        temp.clear();
      }
    }
    else
    {
      cout << text[i] << endl;
      temp.append(1,text[i]);
    }
  }
  if(short_word.empty())
  {
    cout << "empty" << endl;
    short_word = temp;
    temp.clear();
  }
  cout << "Shortest Word: " << short_word << endl;
  return short_word;

  }

  void Analyze_Data(string text)
  {
    int word_count{};
    string shortest_word{};
    word_count = Amount_Of_Words(text);
    shortest_word = Shortest_Word(text);
    //cout << counter << endl;
    cout << "Texten innehöll " << word_count << " ord." << endl;
  }




int main()
{

  string text{};

  text = Get_Data();
  cout << text << endl;

  Analyze_Data(text);


  return 0;
}
