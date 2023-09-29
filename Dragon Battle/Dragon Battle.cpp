#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>  
#include <time.h>
using namespace std;

int PlayerAttack();
int DragonAttack();
int PlayerTurn();


int main()
{
	srand(time(NULL));

	int PlayerHealth = 100;
	int HostileDragonHealth = 100;

	int round = 1;

	int deathCondition = 0;



	while (PlayerHealth >= deathCondition && HostileDragonHealth >= deathCondition)
	{
		cout << "***************** Round " << round++ << " *****************" << endl;



		auto playerAttack = PlayerAttack();
		auto dragonAttack = DragonAttack();

		cout << "Player Health: " << PlayerHealth << endl;
		cout << "Dragon Health: " << HostileDragonHealth << endl;

		cout << "You dealt: " << playerAttack << " Damage" << endl;
		cout << "Dragon dealt: " << dragonAttack << " Damage" << endl;

		PlayerHealth -= dragonAttack;
		HostileDragonHealth -= playerAttack;

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

	return 0;
}