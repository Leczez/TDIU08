#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

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
  vector<int> interests{};

};

vector<int> get_interests();
species get_species();
eye_colour get_eye_colour();
villain get_data();

istream & get_villain(istream & is, villain & v);
void insert(ostream & os, villain v);
