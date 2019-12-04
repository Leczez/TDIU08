#include "register_handler.h"



istream& operator>>(istream& is, eye_colour & eye)
{
  string buffer{};
  is >> buffer;
  if(buffer == "Blue")
  {
    eye = Blue;
  }
  else if(buffer == "Green")
  {
    eye = Green;
  }
  else if(buffer == "Brown")
  {
    eye = Brown;
  }
  else if(buffer == "Gray")
  {
    eye = Gray;
  }
  else if(buffer == "Yellow")
  {
    eye = Yellow;
  }
  else if(buffer == "Red")
  {
    eye = Red;
  }
  else if(buffer == "Black")
  {
    eye = Black;
  }
  else if(buffer == "Crazy")
  {
    eye = Crazy;
  }
  return is;
}



ostream& operator<<(ostream& os, eye_colour eye)
{
  switch (eye)
  {
    case Blue:
      os << "Blue";
      break;
    case Green:
       os << "Green";
      break;
    case Brown:
      os << "Brown";
      break;
    case Gray:
      os << "Gray";
      break;
    case Yellow:
      os << "Yellow";
      break;
    case Red:
      os << "Red";
      break;
    case Black:
      os << "Black";
      break;
    case Crazy:
      os << "Crazy";
      break;
  }
  return os;
}


istream& operator>>(istream& is, species & race)
{
  string buffer{};
  is >> buffer;
  if(buffer == "Human")
  {
      race = Human;
  }
  else if(buffer == "Elf")
  {
    race = Elf;
  }
  else if(buffer == "Orc")
  {
    race = Orc;
  }
  else if(buffer == "Halfling")
  {
    race = Halfling;
  }
  else if(buffer == "Ogre")
  {
    race = Ogre;
  }
  else if(buffer == "Lizardman")
  {
    race = Lizardman;
  }
  return is;
}

ostream& operator<<(ostream& os, species race)
{
  switch (race)
  {
    case Human:
      os << "Human";
      break;
    case Elf:
       os << "Elf";
      break;
    case Orc:
      os << "Orc";
      break;
    case Halfling:
      os << "Halfling";
      break;
    case Ogre:
      os << "Ogre";
      break;
    case Lizardman:
      os << "Lizardman";
      break;
  }
  return os;
}

 istream& operator>>(istream& is, vector<int> & interests)
{
  stringstream ss;
  string buffer{};
  getline(is, buffer,'\n');
  cout << "Buffer = " << buffer << endl;
  ss << buffer;
  int input{};
  while(ss >> input)
  {
    cout << "Input = " << input << endl;
    interests.push_back(input);
  }
  return is;
}

ostream& operator<<(ostream& os, vector<int> interests)
{
  for(int i: interests)
  {
    os << i << " ";
  }
  return os;
}


void insert(fstream & file,villain v)
{
  file << v.name << " "
       << v.age << " "
       << v.gender << " "
       << v.weight << " "
       << v.hair_colour << " "
       << v.villain_species << " "
       << v.villain_eye_colour << " "
       << v.interests << endl;
}

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
  sort();
}

istream & get_villain(istream & file, villain & v)
{
  file >> v.name >> v.age >> v.gender >> v.weight >> v.hair_colour
       >> v.villain_species
       >> v.villain_eye_colour
       >> v.interests;
  return file;
}

vector<villain> get_villains()
{
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
