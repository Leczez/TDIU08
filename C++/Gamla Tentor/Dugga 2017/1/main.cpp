#include <iostream>
#include <string>

using namespace std;


int main()
{
  cout << "Mata in ett ord: ";
  string word{};
  cin >> word;
  int i;

  i = word.find('-');
  char temp1{};
  char temp2{};
  temp1 = word[0];
  temp2 = word[i+1];

  word[0] = temp2;
  word[i+1] = temp1;

  cout << "Menade du " << word << "?" << endl;




}
