#pragma once

#include "Animal.h"

class TPredator : public TAnimal
{
public:
	TPredator();
	TPredator(TPredator& p);
	TPredator(double _weight, double _size);

};
