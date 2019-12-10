#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> get_data();
void sort_data(vector<string> & words);
void print_results(vector<string> words);

int main()
{
  vector<string> words{};
  words = get_data();
  sort_data(words);
  print_results(words);

  return 0;
}

vector<string> get_data()
{
  vector<string> words{};
  string word{};
  while(cin >> word)
  {
    words.push_back(word);
  }
  return words;
}

void sort_data(vector<string> & words)
{
  string tmp{};
  vector<string> temp{words};
  for(int i{};i < words.size();i++)
  {
    for(int j{};j < words.size();j++)
    {
      if(words[i] < words[j])
      {
        tmp = words[i];
        words[i] = words[j];
        words[j] = tmp;
      }
    }
  }

}

void print_results(vector<string> words)
{
  for(int i{};i < words.size();i++)
  {
    cout << words[i] << endl;
  }
}
