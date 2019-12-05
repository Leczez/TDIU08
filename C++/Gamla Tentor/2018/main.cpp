
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

string decode();
string find_letters(stringstream & code);
char get_letter(int number, int character);

int main()
{
  string decoded_message{};
  decoded_message = decode();
  cout << "the decode message is: " << decoded_message << endl;

  return 0;
}


string decode()
{
  fstream message{"message.txt", message.in};

  stringstream code{};
  string buffer{};
  while(getline(message,buffer))
  {
    cout << "buffer: " << buffer << endl;
    code << buffer;
  }
  message.close();

  string decoded{};
  decoded = find_letters(code);

  return decoded;
}


string find_letters(stringstream & code)
{

  char buffer{};
  string buff{};
  string letters{};
  int number{};
  int character{};

  while(code >> number)
  {
    cout << "number: " << number << endl;
    code >> character;
    cout << "character: " << character << endl;
    buffer = get_letter(number, character);

    letters.push_back(buffer);
    cout << "Buffer: " << '"' << buffer << '"' << endl;
  }
  return letters;
}

char get_letter(int number, int character)
{
  fstream reference{"reference.txt", reference.in};

  char buffer{};
  string buff{};

  if(character == 0)
  {
    buffer = ' ';
  }
  else
  {
    for(int i{}; i < number; i++)
    {
      reference >> buff;
    }
    buffer = buff[character-1];
  }
  reference.close();
  return buffer;
}
