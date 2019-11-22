#include <iostream>
#include <iomanip>
#include <vector>
#include <random>
#include <iterator>
#include <algorithm>

using namespace std;

struct contestant
{
  string firstname{};
  string lastname{};
  string club{};
};

void get_contestants(vector<contestant> &contestants);
vector<contestant> make_startlist(vector<contestant> contestants);
void print_startlist(vector<contestant> const startlist);

int main()
{
  vector<contestant> contestants{};
  vector<contestant> startlist{};
  get_contestants(contestants);
  startlist = make_startlist(contestants);
  print_startlist(startlist);
  return 0;
}

void get_contestants(vector<contestant> &contestants)
{
  string buffer{};
  contestant person{};

  cout << "Anmälning, mata in deltagare:" << endl;

  while(cin >> buffer)
  {
    person.firstname = buffer;

    cin >> buffer;
    person.lastname = buffer;

    getline(cin,buffer);
    person.club = buffer;

    contestants.push_back(person);
  }
}

vector<contestant> make_startlist(vector<contestant> const contestants)
{
  random_device rand;
  mt19937 gen(rand());
  vector<contestant> startlist{contestants};
  shuffle(startlist.begin(), startlist.end(), gen);
  return startlist;
}

void print_startlist(vector<contestant> const startlist)
{
  cout << "Startlista:" << endl;
  cout << "Startnummer Förnamn Efternamn Klubb " << endl;
  for(int i{}; i < startlist.size(); i++)
  {
    cout << i << " " << startlist[i].firstname << " " << startlist[i].lastname << " " << startlist[i].club << endl;
  }

}
