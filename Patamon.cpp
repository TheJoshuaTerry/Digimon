#include "Patamon.h"

Patamon::Patamon()
{
	// Base AI Stats for Guilmon in rookie stage
	Str = Rookie.Strength;
	Per = Rookie.Perception;
	End = Rookie.Endurance;
	Cha = Rookie.Charisma;
	Int = Rookie.Intelligence;
	Agi = Rookie.Agility;
	Lck = Rookie.Luck;


	Info.Name = "Patamon";
	Info.EvoLevel = "Rookie";
	Info.EvoLvl = 3; // Numeric Representation of Evo Level for Enum status

	// Health
	Info.MaxHealth = (End * (((int)(Str / 2)) * (Lck * Agi))) + 60;
	Info.Health = Info.MaxHealth;

	// Stamina for Movement during battle
	Info.MaxStamina = Agi * ((End * Lck) * (Per));
	Info.Stamina = Info.MaxStamina;

	// Attack points for using attacks
	Info.MaxAttackPoints = Str * Agi * End * (Per + Lck);
	Info.AttackPoints = Info.MaxAttackPoints / 2;


	Info.Speed = Agi * (Int / Per);
	Info.Armor = End * (Agi / Lck);
	Info.ConversationLevel = Cha * Int;

	// Attacks
	// Basic Attacks
	Base.Name = "Body Blow";
	Base.Damage = Str + Agi + ((int)(Lck / 2));
	Base.PushBackForce = 1;
	Base.AttackPoints = 5;
	// Mid Attacks
	Mid.Name = "Thousand Wings";
	Mid.Damage = Str + Agi + Int + ((int)(Lck / 2));
	Mid.PushBackForce = 1;
	Mid.AttackPoints = 3;
	// UltimateAttack
	UltAttack.Name = "Breeze Blaster";
	UltAttack.Damage = Str + Agi + Per + ((int)(Lck / 2) * Int);
	UltAttack.PushBackForce = 2;
	UltAttack.AttackPoints = 15;
	// SpecialAttack
	SpecialAttack.Name = "Boom Bubble";
	SpecialAttack.Damage = Str + Agi + Per + Int + ((int)(Lck / 2) * Int);
	SpecialAttack.PushBackForce = 3;
	SpecialAttack.AttackPoints = 30;
}
float Patamon::Attack(int AtkNum)
{
	float Damage = 0;
	if (AtkNum == 1) {
		Damage = Base.Damage;
		cout << Info.Name << " used " << Base.AttackPoints << " attack points";
		cout << " to attack with " << Base.Name << " doing " << Damage << " damage" << endl;
		cout << "    ------------------------------    " << endl;
	}
	else if (AtkNum == 2)
	{
		Damage = Mid.Damage;
		cout << Info.Name << " used " << Mid.AttackPoints << " attack points";
		cout << " to attack with " << Mid.Name << " doing " << Damage << " damage" << endl;
		cout << "    ------------------------------    " << endl;
	}
	else if (AtkNum == 3)
	{
		Damage = Mid.Damage;
		cout << Info.Name << " used " << UltAttack.AttackPoints << " attack points";
		cout << " to attack with " << UltAttack.Name << " doing " << Damage << " damage" << endl;
		cout << "    ------------------------------    " << endl;
	}
	else if (AtkNum == 4)
	{
		Damage = Mid.Damage;
		cout << Info.Name << " used " << SpecialAttack.AttackPoints << " attack points";
		cout << " to attack with " << SpecialAttack.Name << " doing " << Damage << " damage" << endl;
		cout << "    ------------------------------    " << endl;
	}
	system("pause");
	cout << Info.Name << " has " << Info.AttackPoints << " attack points Left after attacking" << endl;
	cout << "    ------------------------------    " << endl;
	system("pause");
	return Damage;

}

void Patamon::Damage(float damage)
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

int Patamon::AttackUsed(int RoundsPassed)
{
	int Atk = 0;
	if (Info.AttackPoints > 0)
	{
		if (Info.AttackPoints >= SpecialAttack.AttackPoints && RoundsPassed >= 6)
		{
			Atk = 4;
			Info.AttackPoints -= SpecialAttack.AttackPoints;
		}
		else if (Info.AttackPoints >= UltAttack.AttackPoints && RoundsPassed >= 3)
		{
			Atk = 3;
			Info.AttackPoints -= UltAttack.AttackPoints;
		}
	}
	if (Atk == 0)
	{
		random_device rd; // obtain a random number from hardware
		mt19937 gen(rd()); // seed the generator
		uniform_int_distribution<> MinNum(1, 2); // define the range
		Atk = MinNum(gen);
		if (Atk == 1)
		{
			Info.AttackPoints += Base.AttackPoints;
		}
		else if (Atk == 2)
		{
			Info.AttackPoints += Mid.AttackPoints;
		}
	}
	return Atk;
}

bool Patamon::Dodge(int EnemySpeed)
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

int Patamon::Move()
{
	random_device rd; // obtain a random number from hardware
	mt19937 gen(rd()); // seed the generator
	uniform_int_distribution<> SpeedMultiplyer(1, 5); // define the range
	int Speed = SpeedMultiplyer(gen) * Info.Speed;
	return Speed;
}

void Patamon::Deleted()
{
	cout << Info.Name << " Was Deleted!!!" << endl;
}

void Patamon::Digivolve()
{

}

void Patamon::UseCard()
{

}