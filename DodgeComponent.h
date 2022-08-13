#pragma once
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <math.h>
#include <random>
using namespace std;
class DodgeComponent
{
public:
	enum EDigimonDodge
	{
		DodgeRight,
		DodgeBackwardRight,
		DodgeForwardsRight,
		DodgeLeft,
		DodgeBackwardLeft,
		DodgeForwardsLeft,
		DodgeBackward,
		DodgeForward,
		JumpDodge,
		JumpDodgeForward,
		JumpDodgeBackward,
		JumpDodgeLeft,
		JumpDodgeRight,
		CrouchDodge
	};
};

