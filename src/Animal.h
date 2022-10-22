#pragma once

class TAnimal
{
public:
	TAnimal();
	~TAnimal();


	double GetWeight();

	double GetSize();

	int GetColorCount();

	int* GetColor();
	
	void SetWeight(double _weight);

	void SetSize(double _size);

	void SetColorCount(int _colorCount);

	void SetColor(int color, int i);

protected:
	
	double weight;

	double size;

	int colorCount; 
	int* color;

};
