#pragma once
#include "DigitalMonster.h"


class JyarimonBase : public DigitalMonster
{
public:
	JyarimonBase();
	Info Info;

	// Base AI Stats
	float Str;
	float Per;
	float End;
	float Cha;
	float Int;
	float Agi;
	float Lck;


	// Attacks
	BasicAttack Base;

	// Functions
public:
	float Attack(int AtkNum);
	void Damage(float damage);
	int AttackUsed(int RoundsPassed);
	bool Dodge(int MovementSpeed);
	int Move();
	void Deleted();
	void Digivolve();
	void UseCard();
};

