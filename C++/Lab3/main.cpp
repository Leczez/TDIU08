#include <iostream>
#include <iomanip>
#include <vector>
#include <struct>

using namespace std;

struct contestant
{
  string firstname{};
  string lastname{};
  string club{};
};

vector<contestant> get_contestants();


int main()
{
  vector<contestant> Contestants{get_contestants()};



  return 0;
}

vector<contestant> get_contestants()
{
  string buffer{};
  while(cin.get())


}
