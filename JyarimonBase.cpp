#include "JyarimonBase.h"
JyarimonBase::JyarimonBase()
{
	// Base AI Stats for Guilmon in rookie stage
	Str = Baby.Strength;
	Per = Baby.Perception;
	End = Baby.Endurance;
	Cha = Baby.Charisma;
	Int = Baby.Intelligence;
	Agi = Baby.Agility;
	Lck = Baby.Luck;


	Info.Name = "Jyarimon";
	Info.EvoLevel = "Baby";
	Info.EvoLvl = 3; // Numeric Representation of Evo Level for Enum status

	// Health
	Info.MaxHealth = (End * (((int)(Str / 2)) * (Lck * Agi))) + 60;
	Info.Health = Info.MaxHealth;

	// Stamina for Movement during battle
	Info.MaxStamina = Agi * ((End * Lck) * (Per));
	Info.Stamina = Info.MaxStamina;

	// Attack points for using attacks
	Info.MaxAttackPoints = Str * Agi * End * (Per + Lck);
	Info.AttackPoints = Info.MaxAttackPoints;

	Info.ConversationLevel = Cha * Int;
	Info.Speed = Agi * (Int / Per);

	Info.Armor = End * (Agi / Lck);
	Info.bHasArmor = true;

	// Attacks
	// Basic Attacks
	Base.Name = "Bubble Boom";
	Base.Damage = Str + Agi + ((int)(Lck / 2));
	Base.PushBackForce = 1;
	Base.AttackPoints = 5;
	
}

float JyarimonBase::Attack(int AtkNum)
{
	float Damage = 0;
	Damage = Base.Damage;
	cout << Info.Name << " used " << Base.AttackPoints << " attack points";
	cout << " to attack with " << Base.Name << " doing " << Damage << " damage" << endl;
	cout << "    ------------------------------    " << endl;
	system("pause");
	cout << Info.Name << " has " << Info.AttackPoints << " attack points Left after attacking" << endl;
	cout << "    ------------------------------    " << endl;
	system("pause");
	return Damage;

}

void JyarimonBase::Damage(float damage)
{

	if (damage >= Info.Armor)
	{
		if (Info.bHasArmor)
		{
			Info.bHasArmor = false;
		}
		else if (!Info.bHasArmor)
		{
			Info.Health -= damage;
		}
	}
	else
	{
		Info.Armor -= damage;
	}
}

int JyarimonBase::AttackUsed(int RoundsPassed)
{
	int Atk = 1;
	return Atk;
}

bool JyarimonBase::Dodge(int EnemySpeed)
{
	random_device rd; // obtain a random number from hardware
	mt19937 gen(rd()); // seed the generator
	uniform_int_distribution<> SpeedMultiplyer(1, 3); // define the range
	int Speed = SpeedMultiplyer(gen) * Info.Speed;
	if (Speed >= EnemySpeed)
	{
		cout << "    ------------------------------    " << endl;
		cout << Info.Name << " dodged the attack!" << endl;
		cout << "    ------------------------------    " << endl;
		system("pause");
		return true;
	}
	else
	{
		cout << "    ------------------------------    " << endl;
		cout << Info.Name << " was hit by the attack!!!!" << endl;
		cout << "    ------------------------------    " << endl;
		system("pause");
		return false;
	}
}

int JyarimonBase::Move()
{
	random_device rd; // obtain a random number from hardware
	mt19937 gen(rd()); // seed the generator
	uniform_int_distribution<> SpeedMultiplyer(1, 5); // define the range
	int Speed = SpeedMultiplyer(gen) * Info.Speed;
	return Speed;
}

void JyarimonBase::Deleted()
{
	cout << "Guilmon Was Deleted!!!" << endl;
}

void JyarimonBase::Digivolve()
{

}

void JyarimonBase::UseCard()
{

}
