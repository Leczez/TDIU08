#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include "villain.h"
#include <sstream>

using namespace std;







void new_villain();

vector<villain> find_match(vector<villain> v, vector<int> const interests);
void create_matchlist(vector<int> const interests);

vector<villain> find_match(vector<villain> v, vector<int> const intestines);
void create_matchlist(vector<int> const intestines);

istream & get_villain(istream & file, villain & v);
vector<villain> get_villains();

void sort();
