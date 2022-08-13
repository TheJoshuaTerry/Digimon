#pragma once
#include <iostream>
#include <string>
using namespace std;

class Digivolution
{
public:
	Digivolution();
public:
	enum EvolutionLevel
	{
		EVO_Baby = 1,
		EVO_In_Training = 2,
		EVO_Rookie = 3,
		EVO_Champion = 4,
		EVO_Ultimate = 5,
		EVO_Mega = 6
	};

	struct BaseStats
	{
		float Strength;
		float Perception;
		float Endurance;
		float Charisma;
		float Intelligence;
		float Agility;
		float Luck;

	}Baby, In_Training, Rookie, Champion, Ultimate, Mega;

	

	// Functions
public:

	void Digivolve(string CurrentEvolution, string NextEvolution);
};

