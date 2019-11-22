#include <iostream>
#include <iomanip>
#include <vector>
//#include <struct>

using namespace std;

struct contestant
{
  string firstname{};
  string lastname{};
  string club{};
};

void get_contestants(vector<contestant> &contestants);

int main()
{
  vector<contestant> contestants{};
  get_contestants(contestants);



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
