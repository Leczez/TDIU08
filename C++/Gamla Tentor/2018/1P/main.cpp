#include <iostream>
#include <vector>
#include <random>

using namespace std;

void print_head(int size);
void print_spikes(vector<int> sizes);
vector<int> get_sizes(int amount);
int find_biggest(vector<int> sizes);

int main()
{
  int amount_of_spikes{10};
  vector<int> spike_size{};
  print_head(20);
  spike_size = get_sizes(10);
  print_spikes(spike_size);


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
  mt19937 rnd(rd());
  vector<int> spikes{};
  int buffer{};
  for(int i{}; i < amount; i++)
  {
    buffer = unif(rnd);
    cout << "Buffer = " << buffer << endl;
    spikes.push_back(buffer);
  }
  return spikes;
}

void print_spikes(vector<int> sizes)
{
  int biggest{};
  biggest = find_biggest(sizes);
  int counter{};
  cout << "biggest = " << biggest << endl;

  while(counter <= biggest)
  {
    //cout << "counter = " << counter << endl;
    for(int i{}; i < sizes.size(); i++)
    {
      //cout << "i = " << i << endl;
      //cout << " size = " << sizes[i];
      //cout << " sos ";
      if(sizes[i] == 0)
      {
        cout << "v";
        if(counter == biggest)
        {
          cout << "*";
        }
        else
        {
          cout << " ";
        }
      }
      else if(sizes[i] > 0)
      {
        cout << "|";
        cout << " ";
      }
      else if(sizes[i] < 0)
      {
        cout << "  ";
      }
        sizes[i] += -1;
    }
    cout << endl;
    counter++;
  }
}

int find_biggest(vector<int> sizes)
{

  int biggest{};

  for(int i : sizes)
  {
    cout << "I = " << i << endl;
    if(biggest < i)
    {
      biggest = i;
    }
  }
  return biggest;
}
