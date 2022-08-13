#pragma once
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <math.h>
#include <random>
#include "DodgeComponent.h"
#include "MovementComponent.h"
using namespace std;
class AttackComponent : public DodgeComponent, public MovementComponent
{
public:
	enum EDigimonAttacks
	{
		Digi_BasicAttack = 1,
		Digi_MediumAttack = 2,
		Digi_UltimateAttack = 3,
		Digi_SpecialAttack = 4,
		Digi_SpecialBasicAttack = 5,
		Digi_SpecialMediumAttack = 6,
		Digi_SpecialUltimateAttack = 7
	};
	
private:

	// Functions
public:

};