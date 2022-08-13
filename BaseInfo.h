#pragma once
#include <chrono>
#include <thread>
#include <math.h>
#include <random>
#include <iostream>
#include <string>
using namespace std;

class BaseInfo 
{
public:

	BaseInfo();
	class Info
	{
	public:
		string Name;
		string EvoLevel;
		int EvoLvl;
		// Base Health
		float MaxHealth;
		float Health;
		// For dodging and moving during battle
		float MaxStamina;
		float Stamina;
		// For what attacks can be used when
		float MaxAttackPoints;
		float AttackPoints;

		float Speed;
		float Armor;
		bool bHasArmor;
		float ConversationLevel;
	};
};

