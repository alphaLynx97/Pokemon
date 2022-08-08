#pragma once
#include "baseLibraries.h"


class Pokemon
{
protected:
	string name;
	string type; //Fire, Water, etc.
	string ability; //Abilities that affect terrain or pokemon
	//Base Stats//
	int hp;
	int attack;
	int defense;
	int specialAttack;
	int specialDefense;
	int speed;
	map<string, int> moves; //String for the type of move and integer for the remaining uses
	Pokemon()
	{

	}
public:
	//Getters
	string getName()
	{
		return name;
	}
	string getType()
	{
		return type;
	}
	string getAbility()
	{
		return ability;
	}
	int getHP()
	{
		return hp;
	}
	int getAttack()
	{
		return attack;
	}
	int getDefense()
	{
		return defense;
	}
	int getSpecialAttack()
	{
		return specialAttack;
	}
	int getSpecialDefense()
	{
		return specialDefense;
	}
	int getSpeed()
	{
		return speed;
	}
	void displayMoves()
	{
		for (auto iter = moves.begin(); iter != moves.end(); iter++)
		{
			cout << iter->first << "---" << iter->second << endl;
		}
	}
	//Setters
	void setName(string Name)
	{
		name = Name;
	}
	void setType(string Type)
	{
		type = Type;	
	}
	void setAbility(string Ability)
	{
		ability = Ability;
	}
	void setHP(int HP)
	{
		hp = HP;
	}
	void setAttack(int Attack)
	{
		attack = Attack;
	}
	void setDefense(int Defense)
	{
		defense = Defense;
	}
	void setSpecialAttack(int SpecialAttack)
	{
		specialAttack = SpecialAttack;
	}
	void setSpecialDefense(int SpecialDefense)
	{
		specialDefense = SpecialDefense;
	}
	void setSpeed(int Speed)
	{
		speed = Speed;
	}
	void forgetMove(string deletedMove)
	{
		auto iterator = moves.find(deletedMove);
		if (iterator != moves.end())
		{
			moves.erase(deletedMove);
		}
		else
		{
			cout << "This pokemon does not know that move." << endl;
		}
	}
	//Miscellaneous
	void ParsePokemon();
};