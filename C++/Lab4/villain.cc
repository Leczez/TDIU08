#include "villain.h"


vector<int> get_interests()
{
  cout << "Input the interests of the villain: ";
  int counter{};
  int interest{};
  while(counter < 10)
  {
    cin >> interest;
    if(!(interest > 15 or interest < 1))
    {
      interests.push_back(interest);
      counter++;
    }
  }
}

enum get_species()
{
  cout << "1 Human \n, 2 Elf \n, 3 Orc\n, 4 Halfling\n, 5 Ogre\n, 6 Lizardman";
  cout << "Input the number corresponding to the villains species: "
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

villain get_data()
{ villain da_villain{};
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
  cout << "Input the species of the villain: ";
  da_villain.species = get_species();
  cout << "Input the eye colour of the villain: ";
  cin >> da_villain.eye_colour;

  da_villain.interests = get_interests();

  return da_villain;

}

void new_villain()
{
  villain the_new_villain{};

  the_new_villain = get_data();



}
