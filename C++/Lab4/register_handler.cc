#include "register_handler.h"


void insert_villains(fstream & file, vector<villain> v)
{
  for(int i{}; i < v.size(); i++)
  {
    insert(file, v[i]);
  }

}

void new_villain()
{
  villain the_new_villain{};

  the_new_villain = get_data();

  fstream file{"register.txt", file.app};
  insert(file,the_new_villain);

  file.close();
}

vector<villain> get_villains()
{
  //cout << "GETTING VILLAINS" << endl;
  vector<villain> buffer{};
  villain v{};
  fstream file{"register.txt", file.in};

  while(get_villain(file,v))
  {
    buffer.push_back(v);
    v.interests.clear();
  }
  file.close();
  return buffer;
}



void sort()
{
  vector<villain> v{};
  v = get_villains();
  vector<villain> f{};
  vector<villain> m{};
  for(int i{}; i < v.size(); i++)
  {
    if(v[i].gender == 'F')
    {
      f.push_back(v[i]);
    }
    else if(v[i].gender == 'M')
    {
      m.push_back(v[i]);
    }
  }
  fstream file{"register.txt", file.out};
  insert_villains(file, f);
  insert_villains(file, m);
  file.close();
}


vector<villain> find_match(vector<villain> v, vector<int> const intestines)
{
  vector<villain> matched{};
  bool found_one{};
  for(int i{}; i < v.size(); i++)
  {
    found_one = false;
    for(int j{}; j < v[i].interests.size(); j++)
    {
      for(int k{}; k < intestines.size(); k++)
      {
       if(intestines[k] == v[i].interests[j])
       {
          matched.push_back(v[i]);
          found_one = true;
          break;
        }
      }
      if(found_one == true)
      {
        break;
      }
    }
  }
  return matched;
}

void create_matchlist(vector<int> const intestines)
{
  vector<villain> villains{};
  vector<villain> matching_villains{};
  villains = get_villains();
  matching_villains = find_match(villains, intestines);
  fstream file{"result.txt", file.out};
  insert_villains(file, matching_villains);
  file.close();
}
