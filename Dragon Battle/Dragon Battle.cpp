#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>  
#include <time.h>
using namespace std;

int PlayerAttack();
int DragonAttack();
int PlayerTurn();
int DragonTurn();

int PlayerHealth = 100;
int HostileDragonHealth = 100;

int main()
{
	srand(time(NULL));



	int round = 1;

	int deathCondition = 0;



	while (PlayerHealth >= deathCondition && HostileDragonHealth >= deathCondition)
	{
		cout << "***************** Round " << round++ << " *****************" << endl;

		cout << "-------------" << endl;
		cout << "Players Turn:" << endl;
		cout << endl;
		PlayerTurn();
		
		cout << "-------------" << endl;
		cout << "Dragons Turn:" << endl;
		cout << endl;
		DragonTurn();
		
		

		if (PlayerHealth <= deathCondition)
		{
			cout << "Player lost." << endl;
		}
		if (HostileDragonHealth <= deathCondition)
		{
			cout << "Dragon lost." << endl;
		}


	}

	return 0;
}

int PlayerAttack() {

	int playerAttack = rand() % 11 + 3;
	return playerAttack;

}

int DragonAttack() {

	int dragonAttack = rand() % 12 + 4;
	return dragonAttack;

}

int PlayerTurn()
{

	auto playerAttack = PlayerAttack();

	cout << "Player Health: " << PlayerHealth << endl;

	cout << "You dealt: " << playerAttack << " Damage" << endl;

	HostileDragonHealth -= playerAttack;
	return 0;
}

int DragonTurn() {
	auto dragonAttack = DragonAttack();


	cout << "Dragon Health: " << HostileDragonHealth << endl;


	cout << "Dragon dealt: " << dragonAttack << " Damage" << endl;

	PlayerHealth -= dragonAttack;
	return 0;
}