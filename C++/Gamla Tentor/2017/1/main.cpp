#include <iostream>
#include <string>

using namespace std;

void insertO_s(string & word);

int main()
{
  string word1{};
  string word2{};

  cout << "Skriv in två ord: ";
  cin >> word1 >> word2;

  insertO_s(word1);
  insertO_s(word2);

  cout << "Dina ord var " << word1 << " " << word2 << endl;

  return 0;
}

void insertO_s(string & word)
{
  int pos{};
  string new_word{};
  int amount_of_o_s{};
  bool no_o{true};
  for(int i{}; i < word.size();i++)
  {
    if(word[i] == 'o')
    {
      pos = i;
      amount_of_o_s++;
      no_o = false;
    }
  }
  cout << "amount_of_o_s = " << amount_of_o_s << endl;
  cout << "word.size() - amount_of_o_s  = " << word.size() - amount_of_o_s << endl;
  if(!no_o)
  {
    for(int i{}; i < pos;i++)
    {
      new_word.push_back(word[i]);
    }
    for(int i{}; i < word.size()-amount_of_o_s;i++)
    {
      cout << "o" << endl;
      new_word.push_back('o');
    }
    for(int i{pos}; i < word.size();i++)
    {
      new_word.push_back(word[i]);
    }
    word = new_word;
  }
}
