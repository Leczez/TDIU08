#include <iostream>
#include <vector>
#include <random>

using namespace std;

void print_head(int size);
void print_spikes(int amount);
vector<int> get_sizes(int amount);

int main()
{
  int amount_of_spikes{};
  vector<int> spike_size{};
  print_head(20);
  spike_size = get_sizes(10);
  //print_spikes(amount_of_spikes);


  return 0;
}


void print_head(int size)
{
  if(size != 0)
  {
    cout << "-";
    print_head(size-1);
  }
  else
  {
    cout << endl;
  }
}

vector<int> get_sizes(int amount)
{
  random_device rd;
  uniform_int_distribution<int> unif(5, 15);
  mt19937 rand(rd());
  vector<int> spikes{};
  for(int i{}; i < amount; i++)
  {
    spikes.push_back(rand());
  }
  return spikes;
}
