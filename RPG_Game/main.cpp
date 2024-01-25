#include <iostream>

class Enemy
{
public:
	int health = 0;
	int damage = 0;

	void kill()
	{
		std::cout << "I am killing" << std::endl;
	}

	void Heal()
	{
		health += 10;
		std::cout << "My health is now " << health << std::endl;
	}

	void Walk()
	{
		std::cout << "I am walking!" << std::endl;
	}
};
int main()
{

	Enemy goblin;

	goblin.health = 100;
	goblin.damage = 50;
	goblin.Walk();

	std::cout << "Goblin stats are: " << std::endl;
	std::cout << goblin.health << std::endl;
	std::cout << goblin.damage << std::endl;

	std::cout << goblin.health << std::endl;

	goblin.Heal();

	//--------------------------------------

	Enemy dragon;
	dragon.health = 200;
	dragon.damage = 60;

	std::cout << "Dragon stats are: " << std::endl;
	std::cout << dragon.health << std::endl;
	std::cout << dragon.damage << std::endl;

	return 0;
}

