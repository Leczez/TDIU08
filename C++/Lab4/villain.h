#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct villain
{
  string name{};
  int age{};
  char gender{};
  double weight{};
  string hair_colour{};
  enum species{Human, Elf , Orc, Halfling, Ogre, Lizardman};
  enum eye_colour{Blue, Green, Brown, Gray, Yellow, Red, Black, Crazy};
  vector<int> interests{}; // kommer behöva starta en loop vid 1

};

void new_villain();

vector<villain> find_match(vector<int> const interests);

void create_matchlist(vector<villain> const villains);
