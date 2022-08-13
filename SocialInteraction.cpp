#include "SocialInteraction.h"

SocialInteraction::SocialInteraction()
{
	
}



void SocialInteraction::SetInteractionForNormalQuestions(int ArrayOne, int ArrayTwo)
{
	
	cout << NormalQuestions[ArrayOne][ArrayTwo] << endl;
	system("pause");
	
}

void SocialInteraction::SetInteractionForAnswers(int ArrayOne, int ArrayTwo)
{
	random_device rd; // obtain a random number from hardware
	mt19937 gen(rd()); // seed the generator
	uniform_int_distribution<int> Num(0, 2); // define the range
	int num = Num(gen);
	
	if (num == 0)
	{
		cout << Answers1[ArrayOne][ArrayTwo] << endl;
	}
	else if (num == 1)
	{
		cout << Answers2[ArrayOne][ArrayTwo] << endl;
	}
	else if (num == 2)
	{
		cout << Answers3[ArrayOne][ArrayTwo] << endl;
	}
	system("pause");
}

void SocialInteraction::SetInteractionForGreetings()
{
	random_device rd; // obtain a random number from hardware
	mt19937 gen(rd()); // seed the generator
	uniform_int_distribution<int> Num(0, 9); // define the range
	int greeting = Num(gen);
	cout << Greeting[greeting] << endl;
	system("pause");
}

void SocialInteraction::SetInteractionForGoodbyes()
{
	random_device rd; // obtain a random number from hardware
	mt19937 gen(rd()); // seed the generator
	uniform_int_distribution<int> Num(0, 9); // define the range
	int goodbye = Num(gen);
	cout << Goodbye[goodbye] << endl;
	system("pause");
}
