#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

  /*
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
        if(text[i+1] != ' ')
        {
          word_count++;
        }
      }
    }
    return word_count;
  }

string Longest_Word(string text)
{
  string long_word{};
  string temp{};

  for(int i{}; i < counter; i++)
  {
    if(text[i] == '\n' or text[i] == ' ' or text[i] == '\0')
    {
      if(long_word.empty())
      {
        long_word = temp;
        temp.clear();
      }else if(long_word.size() < temp.size())
      {
        long_word = temp;
        temp.clear();
      }
      else
      {
        temp.clear();
      }
    }
    else
    {
      temp.append(1,text[i]);
    }
  }
  if(long_word.empty())
  {
    long_word = temp;
    temp.clear();
  }
  return long_word;
}

string Shortest_Word(string text)
{
  string short_word{};
  string temp{};

  for(int i{}; i < counter; i++)
  {
    cout << "I == " << i << " Char == " << text[i] << endl;
    if(text[i] == '\n' or text[i] == ' ' or text[i] == '\0')
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
Medelordlängden var 5 bokstäver.
void Analyze_Data(string text)
{
  int word_count{};
  string shortest_word{};
  string longest_word{};
  word_count = Amount_Of_Words(text);
  shortest_word = Shortest_Word(text);
  longest_word = Longest_Word(text);
  //cout << counter << endl;
  cout << "text is: " << text << endl;
  cout << "Texten innehöll " << word_count << " ord." << endl;
  cout << "Det kortaste ordet var " << '"' << shortest_word << '"' << " med " << shortest_word.size() << " bokstäver. " << endl;
  cout << "Det längsta ordet var " << '"' << longest_word << '"' << "med " << longest_word.size() << " bokstäver." << endl;
}

*/

int main()
{
  /*
  string text{};

  text = Get_Data();
  cout << text << endl;

  Analyze_Data(text);
*/
  string buffer{};
  string text{};
  string longest_word{};
  string shortest_word{};
  int words{};
  int chars{};
  double average_char_count{};

  cout << "Mata in texten:" << endl;
  while(cin >> buffer)
  {
    chars += buffer.size();
    if(shortest_word.empty())
    {
      shortest_word = buffer;
    }
    else if(buffer.size() < shortest_word.size())
    {
      shortest_word = buffer;
    }
    if(buffer.size() > longest_word.size())
    {
      longest_word = buffer;
    }
    words++;
  }

  average_char_count = round(double(chars)/double(words));
  //cout << "Chars: " << chars << endl;
  cout << "Texten innehöll " << words << " ord." << endl;
  cout << "Det kortaste ordet var " << '"' << shortest_word << '"' << " med " << shortest_word.size() << " bokstäver. " << endl;
  cout << "Det längsta ordet var " << '"' << longest_word << '"' << " med " << longest_word.size() << " bokstäver." << endl;
  cout << "Medelordlängden var " << average_char_count << " bokstäver." << endl;

  return 0;
}
