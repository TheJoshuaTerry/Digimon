#pragma once
#include "DigitalMonster.h"
class Patamon : public DigitalMonster
{
public:
	Patamon();
	// Base Info 
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
	MediumAttack Mid;
	UltimateAttack UltAttack;
	SpecialAttack SpecialAttack;

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