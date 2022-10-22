#include <iostream>
#include "Animal.h"
#include "Predator.h"

int main()
{
	TAnimal cat1;
	cat1.SetSize(10);
	cat1.SetWeight(1000);

	TAnimal cat2; 
	cat2 = cat1;

	TPredator cat3(30, 5000);

	return 0;
}