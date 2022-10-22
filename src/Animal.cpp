#include "Animal.h"

TAnimal::TAnimal()
{
	weight = 0;

	size = 0;

	colorCount = 5;

	color = new int[colorCount];
 }

TAnimal::~TAnimal()
{
 	weight = 0;

	size = 0;

	delete [] color;
}


double TAnimal::GetWeight()
{
	return weight;
}

double TAnimal::GetSize()
{
	return size;
}

int TAnimal::GetColorCount()
{
	return colorCount;
}

int* TAnimal::GetColor()
{
	return color;
}

void TAnimal::SetWeight(double _weight)
{
	if (_weight > 0)
		this->weight = _weight;
}

void TAnimal::SetSize(double _size)
{
	if (_size)
		size = _size;
}

void TAnimal::SetColorCount(int _colorCount)
{
	if (_colorCount > 0)
	{
		int* temp = new int[_colorCount];
		for (int i = 0; i < (colorCount > _colorCount ? _colorCount : colorCount); i++)
		{
			temp[i] = color[i];
		}

		delete[] color;
		color = temp;
		colorCount = _colorCount;
	}
}

void TAnimal::SetColor(int color, int i)
{
	if (i >= 0 && i < colorCount)
	{
		this->color[i] = color;
	}
}