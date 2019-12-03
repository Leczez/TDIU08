#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <ostream>

using namespace std;
enum species
{
  Human, Elf , Orc, Halfling, Ogre, Lizardman
};

enum eye_colour
{
  Blue, Green, Brown, Gray, Yellow, Red, Black, Crazy
};

struct villain
{
  string name{};
  int age{};
  char gender{};
  double weight{};
  string hair_colour{};
  species villain_species;
  eye_colour villain_eye_colour;
  vector<int> interests{}; // kommer behöva starta en loop vid 1

};

void new_villain();

vector<villain> find_match(vector<int> const interests);

void create_matchlist(vector<villain> const villains);

villain get_villain();
