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
