#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include "villain.h"

using namespace std;


void new_villain();

vector<villain> find_match(vector<villain> v, vector<int> const intestines);
void create_matchlist(vector<int> const intestines);

vector<villain> get_villains();

void sort();
