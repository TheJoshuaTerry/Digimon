#pragma once
#include "SocialInteraction.h"
#include "Digivolution.h"
#include "BaseInfo.h"
#include "AttackComponent.h"




class DigitalMonster :  public BaseInfo,
						public SocialInteraction,
						public Digivolution,
						public AttackComponent
{
public:
	DigitalMonster();

	class BasicAttack
	{
	public:
		string Name;
		float Damage;
		float PushBackForce;
		float AttackPoints;
	};
	class MediumAttack
	{
	public:
		string Name;
		float Damage;
		float PushBackForce;
		float AttackPoints;
	};
	class UltimateAttack
	{
	public:
		string Name;
		float Damage;
		float PushBackForce;
		float AttackPoints;
	};
	class SpecialAttack
	{
	public:
		string Name;
		float Damage;
		float PushBackForce;
		float AttackPoints;
	};
};

