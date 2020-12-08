#include <iostream>
#include "Array.h"

Array::Array(int _size)
{
	size = _size;
	massiv = new int[size];
}

Array::Array(int* _massiv)
{
	size = _msize(_massiv) / 4;
	massiv = new int[size];
	for (int i = 0; i < size; i++)
	{
		massiv[i] = _massiv[i];
	}

}

Array::Array(const Array& copy)
{
	size = copy.size;
	massiv = new int[size];
	for (int i = 0; i < size; i++)
	{
		massiv[i] = copy.massiv[i];
	}
}

void Array::Fill()
{
	for (int i = 0; i < size; i++)
	{
		massiv[i] = rand() % 100;
	}
}

void Array::Show()
{
	for (int i = 0; i < size; i++)
		std::cout << massiv[i] << ' ';
	std::cout << std::endl;
}

void Array::Sort()
{
	int a = 0;
	for (int i = 0; i < size; i++)
	{
		for(int j = i+1; j < size; j++)
		if (massiv[i] > massiv[j])
		{
			a = massiv[i];
			massiv[i] = massiv[j];
			massiv[j] = a;
		}
	}
}

Array::~Array()
{
	delete[] massiv;
}
