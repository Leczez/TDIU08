#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> get_seats();
void print_table(vector<int> seats);

int main()
{
  vector<int> seats{};
  seats = get_seats();
  print_table(seats);

  return 0;
}

vector<int> get_seats()
{
  vector<int> seats{};
  int amount{};
  int buffer{};
  char c{};
  bool waiting{false};
  int person_waiting{};
  cout << "How many seats are there around the table: ";
  cin >> amount;
  for(int i{}; i < amount; i++)
  {
    cout << "Input the seatnumber for " << i + 1  << ": ";

    cout << cin.peek() << endl;
    if(cin.peek() != '\n')
    {
      cin >> c;
      buffer = c;
      seats.push_back(buffer);
    }
    else
    {
      if(waiting)
      {
        cout << "A person is already waiting, you have to choose a seat now!" << endl;
        cin.get(c);
        buffer = c;
        seats.push_back(buffer);
      }
      else
      {
        waiting = true;
        person_waiting = i;
        seats.push_back(0);
      }
    }
    cout << endl;
  }
  if(waiting)
  {
    int remaining{};
    vector<int> numbers{};
    for(int i{0}; i < seats.size(); i++)
    {
      numbers.push_back(i);
    }

    for(int j : seats)
    {
      for(int k : numbers)
      {
        if(k != j)
        {
          remaining = k;
        }
      }
    }
    seats[person_waiting] = remaining;
  }
}

void print_table(vector<int> seats)
{
  cout << "Person |";
  for(int i{0}; i < seats.size();i++)
  {
    cout << " " << i + 1  << " |";
  }
}
