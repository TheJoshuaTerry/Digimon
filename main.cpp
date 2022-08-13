#include "main.h"


int main()
{
	SelectDigimon();
	EnemyDigimon();
	Greeting();
	Interaction();
	Battle();
	
}

void SelectDigimon()
{
	int digimon = 0;
	cout << "Select Digimon Partner::" << endl;
	cin >> digimon;
	if (digimon == 1)
	{
		delete MainDigimon;
		Guilmon* MainDigimon = new Guilmon;

	} else if (digimon == 2)
	{
		delete MainDigimon;
		Renamon* MainDigimon = new Renamon;
	}
	else if (digimon == 3)
	{
		delete MainDigimon;
		Patamon* MainDigimon = new Patamon;
	}
	else if (digimon == 4)
	{
		delete MainDigimon;
		Gabumon* MainDigimon = new Gabumon;
	}
}

void EnemyDigimon()
{
	int digimon = 0;
	cout << "Select Enemy Digimon::" << endl;
	cin >> digimon;
	if (digimon == 1)
	{
		delete SecondDigimon;
		Guilmon* SecondDigimon = new Guilmon;
	}
	else if (digimon == 2)
	{
		delete SecondDigimon;
		Renamon* SecondDigimon = new Renamon;
	}
	else if (digimon == 3)
	{
		delete SecondDigimon;
		Patamon* SecondDigimon = new Patamon;
	}
	else if (digimon == 4)
	{
		delete SecondDigimon;
		Gabumon* SecondDigimon = new Gabumon;
	}
}

void Greeting()
{
	// Digimon Greetings
	cout << "***********    ";
	cout << MainDigimon->Info.Name; // Main Digimon
	cout << "    ***********" << endl;
	MainDigimon->SetInteractionForGreetings(); // Main Digimon
	cout << "    ------------------------------    " << endl;
	this_thread::sleep_for(chrono::milliseconds(250));
	cout << "***********    ";
	cout << SecondDigimon->Info.Name; // Second Digimon
	cout << "    ***********" << endl;
	SecondDigimon->SetInteractionForGreetings(); // Second Digimon
	cout << "    ------------------------------    " << endl;
	this_thread::sleep_for(chrono::milliseconds(250));
	system("pause");
}

void Interaction()
{
	int Array1;
	int Array2;
	random_device rd; // obtain a random number from hardware
	mt19937 gen(rd()); // seed the generator
	uniform_int_distribution<> SmallNum(0, 3); // define the range
	uniform_int_distribution<> BigNum(0, 8); // define the range

	Array1 = SmallNum(gen);
	Array2 = BigNum(gen);
	cout << "***********    ";
	cout << MainDigimon->Info.Name; // Main Digimon
	cout << "    ***********" << endl;
	MainDigimon->SetInteractionForNormalQuestions(Array1, Array2); // Main Digimon
	cout << "    ------------------------------    " << endl;
	this_thread::sleep_for(chrono::milliseconds(250));
	Array1 = SmallNum(gen);
	Array2 = BigNum(gen);
	cout << "***********    ";
	cout << SecondDigimon->Info.Name; // Second Digimon
	cout << "    ***********" << endl;
	SecondDigimon->SetInteractionForAnswers(Array1, Array2); // Second Digimon
	cout << "    ------------------------------    " << endl;
	this_thread::sleep_for(chrono::milliseconds(250));
	system("pause");

	Array1 = SmallNum(gen);
	Array2 = BigNum(gen);
	cout << "***********    ";
	cout << SecondDigimon->Info.Name; // Second Digimon
	cout << "    ***********" << endl;
	SecondDigimon->SetInteractionForNormalQuestions(Array1, Array2); // Second Digimon
	cout << "    ------------------------------    " << endl;
	this_thread::sleep_for(chrono::milliseconds(250));
	Array1 = SmallNum(gen);
	Array2 = BigNum(gen);
	cout << "***********    ";
	cout << MainDigimon->Info.Name; // Main Digimon
	cout << "    ***********" << endl;
	MainDigimon->SetInteractionForAnswers(Array1, Array2); // Main Digimon
	cout << "    ------------------------------    " << endl;
	this_thread::sleep_for(chrono::milliseconds(250));
	system("pause");
}

void Battle()
{
	// Battle Starts
	random_device rd; // obtain a random number from hardware
	mt19937 gen(rd()); // seed the generator
	int RoundsPassed = 0;
	while (MainDigimon->Info.Health > 0 || SecondDigimon->Info.Health > 0)
	{
		if (MainDigimon->Info.Health <= 0)
		{
			MainDigimon->Deleted(); // Main Digimon
			cout << "***********    ";
			cout << SecondDigimon->Info.Name; // Second Digimon
			cout << "    ***********" << endl;
			SecondDigimon->SetInteractionForGoodbyes(); // Second Digimon
			cout << "    ------------------------------    " << endl;
			this_thread::sleep_for(chrono::milliseconds(250));
			system("pause");
			delete MainDigimon;
			delete SecondDigimon;
			break;
		}
		else if (SecondDigimon->Info.Health <= 0) // Second Digimon
		{
			SecondDigimon->Deleted();  // Second Digimon
			cout << "***********    ";
			cout << MainDigimon->Info.Name; // Main Digimon
			cout << "    ***********" << endl;
			MainDigimon->SetInteractionForGoodbyes(); // Main Digimon
			cout << "    ------------------------------    " << endl;
			this_thread::sleep_for(chrono::milliseconds(250));
			system("pause");
			delete MainDigimon;
			delete SecondDigimon;
			break;
		}
		else
		{
			uniform_int_distribution<> Num(0, 1); // define the range
			int WhoAttacks = Num(gen);
			float AtkDamage;
			if (WhoAttacks == 0) // Renamon Attacks
			{
				cout << ". . . . . . . . . . . . . . . ." << endl;
				int AtkNum = SecondDigimon->AttackUsed(RoundsPassed);  // Second Digimon
				AtkDamage = SecondDigimon->Attack(AtkNum);  // Second Digimon
				int MoveSpeed = SecondDigimon->Move();  // Second Digimon
				if (!MainDigimon->Dodge(MoveSpeed))  // Main Digimon
				{
					MainDigimon->Damage(AtkDamage);
					cout << ". . . . . . . . . . . . . . . ." << endl;
					cout << MainDigimon->Info.Name << " Health is now " << MainDigimon->Info.Health << endl; // Main Digimon
					cout << ". . . . . . . . . . . . . . . ." << endl;
					system("pause");
				}
				this_thread::sleep_for(chrono::milliseconds(500));
				cout << ". . . . . . . . . . . . . . . ." << endl;
				cout.flush();
				this_thread::sleep_for(chrono::milliseconds(100));
				system("pause");
			}
			else if (WhoAttacks == 1) // Guilmon Attacks
			{
				cout << ". . . . . . . . . . . . . . . ." << endl;
				int AtkNum = MainDigimon->AttackUsed(RoundsPassed); // Main Digimon
				AtkDamage = MainDigimon->Attack(AtkNum); // Main Digimon
				int MoveSpeed = MainDigimon->Move(); // Main Digimon
				if (!SecondDigimon->Dodge(MoveSpeed))  // Second Digimon
				{
					SecondDigimon->Damage(AtkDamage);  // Second Digimon
					cout << ". . . . . . . . . . . . . . . ." << endl;
					cout << SecondDigimon->Info.Name << " Health is now " << SecondDigimon->Info.Health << endl; // Second Digimon
					cout << ". . . . . . . . . . . . . . . ." << endl;
					system("pause");
				}
				this_thread::sleep_for(chrono::milliseconds(500));
				cout.flush();
				cout << ". . . . . . . . . . . . . . . ." << endl;
				this_thread::sleep_for(chrono::milliseconds(100));
				system("pause");
			}
		}
		RoundsPassed++;
	}
}
