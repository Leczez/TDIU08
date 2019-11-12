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

  string Get_Word()
  {

    
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

string Longest_Word(string text)
{
  string long_word{};
  string temp{};

  for(int i{}; i <= counter; i++)
  {
    if(text[i] == '\n' or text[i] == ' ')
    {
      cout << "in else" << endl;
      if(long_word.empty())
      {
        cout << "is empty" << endl;
        long_word = temp;
        temp.clear();
      }else if(long_word.size() < temp.size())
      {
        cout << "Comparison" << endl;
        long_word = temp;
        temp.clear();
      }
    }
    else
    {
      cout << text[i] << endl;
      temp.append(1,text[i]);
    }
  }
  if(long_word.empty())
  {
    cout << "empty" << endl;
    long_word = temp;
    temp.clear();
  }
  cout << "Longest Word: " << long_word << endl;
  return long_word;
}

string Shortest_Word(string text)
{
  string short_word{};
  string temp{};

  for(int i{}; i <= counter; i++)
  {
    if(text[i] == '\n' or text[i] == ' ')
    {
      if(short_word.empty())
      {
        short_word = temp;
        temp.clear();
      }else if(short_word.size() > temp.size())
      {
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
  string longest_word{};
  word_count = Amount_Of_Words(text);
  shortest_word = Shortest_Word(text);
  longest_word = Longest_Word(text);
  //cout << counter << endl;
  cout << "Texten innehöll " << word_count << " ord." << endl;
  cout << "Det kortaste ordet var " << '"' << shortest_word << '"' << " med " << shortest_word.size() << " bokstäver. " << endl;
}




int main()
{

  string text{};

  text = Get_Data();
  cout << text << endl;

  Analyze_Data(text);


  return 0;
}
