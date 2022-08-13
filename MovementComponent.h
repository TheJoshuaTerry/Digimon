#pragma once
class MovementComponent
{
public:
	enum DigimonMovement
	{
		MoveRight,
		MoveBackwardRight,
		MoveForwardsRight,
		MoveLeft,
		MoveBackwardLeft,
		MoveForwardsLeft,
		MoveBackward,
		MoveForward,
		Jump,
		JumpForward,
		JumpBackward,
		JumpLeft,
		JumpRight,
		Crouch
	};
	int IndividualSpeed;
};

