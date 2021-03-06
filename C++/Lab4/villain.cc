#include "villain.h"
#include <iostream>

vector<int> get_interests()
{
  cout << "Input the interests of the villain: ";
  int interest{};
  vector<int> interests{};
  while(cin >> interest)
  {
    if(!(interest > 15 or interest < 1))
    {
      interests.push_back(interest);
    }
    else
    {
      while(true)
      {
        cout << "Please input a interest between 1 and 15: ";
        cin >> interest;
        if(!(interest > 15 or interest < 1))
        {
          interests.push_back(interest);
          break;
        }
      }
    }
  }
  cin.clear();
  return interests;
}

species get_species()
{
  cout << "Input the species of the villain: " << endl;
  cout << "1 Human \n2 Elf \n3 Orc\n4 Halfling\n5 Ogre\n6 Lizardman";
  cout << "Input the number corresponding to the villains species: ";
  int choice{};
  cin >> choice;

  switch (choice)
  {
    case 1:
      return Human;
      break;
    case 2:
      return Elf;
      break;
    case 3:
      return Orc;
      break;
    case 4:
      return Halfling;
      break;
    case 5:
      return Ogre;
      break;
    case 6:
      return Lizardman;
      break;
  }

}

eye_colour get_eye_colour()
{
  cout << "Input the eyecolour of the villain: " << endl;
  cout << "1 Blue \n2 Green\n3 Brown\n4 Gray \n5 Yellow \n6 Red \n7 Black \n8 Crazy " << endl;
  cout << "Input the number corresponding to the villains eyecolour: ";

  int choice{};
  cin >> choice;

  switch (choice)
  {
    case 1:
      return Blue;
      break;
    case 2:
      return Green;
      break;
    case 3:
      return Brown;
      break;
    case 4:
      return Gray;
      break;
    case 5:
      return Yellow;
      break;
    case 6:
      return Red;
      break;
    case 7:
      return Black;
      break;

    case 8:
      return Crazy;
      break;
  }

}


villain get_data()
{
  villain da_villain{};

  cout << "Input the name of the villain: ";
  cin >> da_villain.name;
  cout << "Input the age of the villain: ";
  cin >> da_villain.age;
  cout << "Input the gender of the villain (as a character): ";
  cin >> da_villain.gender;
  cout << "Input the weight of the villain: ";
  cin >> da_villain.weight;
  cout << "Input the hair colour of the villain: ";
  cin >> da_villain.hair_colour;

  da_villain.villain_species = get_species();

  da_villain.villain_eye_colour = get_eye_colour();

  da_villain.interests = get_interests();

  return da_villain;

}


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
  //cout << "NOW GETTING INTERESTS" << endl;
  getline(is, buffer);
  //cout << "Buffer = " << buffer << endl;
  ss << buffer;
  int input{};
  while(ss >> input)
  {
  //  cout << "Input = " << input << endl;
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


void insert(ostream & os, villain v)
{
  os << v.name << " "
       << v.age << " "
       << v.gender << " "
       << v.weight << " "
       << v.hair_colour << " "
       << v.villain_species << " "
       << v.villain_eye_colour << " "
       << v.interests << endl;
}

istream & get_villain(istream & is, villain & v)
{
  is >> v.name >> v.age >> v.gender >> v.weight >> v.hair_colour
       >> v.villain_species
       >> v.villain_eye_colour
       >> v.interests;
  return is;
}
