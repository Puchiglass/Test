#include "Predator.h"

TPredator::TPredator() : TAnimal()
{
}

TPredator::TPredator(TPredator& p)
{
	weight = p.weight;
	size = p.size;
}

TPredator::TPredator(double _weight, double _size)
{
	SetWeight(_weight);
	SetSize(_size);
}
