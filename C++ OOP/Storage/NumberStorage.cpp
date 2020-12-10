#include "NumberStorage.h"
#include <iostream>
#include <ctime>

uint32_t NumberStorage::usedMemory = 0;
//uint32_t NumberStorage::countStorages = 0;

NumberStorage::NumberStorage(uint32_t _elementsCount) :
	storage{ _elementsCount == 0 ? NULL : new int[_elementsCount] },
		elementsCount{ _elementsCount }
	{
		uint32_t used = elementsCount * sizeof(int);
		usedMemory += used;
		std::cout << "NumberStorage: additional " << used
			<< " bytes used. Total: " << usedMemory << std::endl;
		for (uint32_t i = 0; i < elementsCount; ++i)
		{
			storage[i] = rand() % 10;
		}
	}

NumberStorage::NumberStorage(const NumberStorage& copy) :
	NumberStorage(copy.elementsCount)
{
	for (uint32_t i = 0; i < elementsCount; ++i)
		storage[i] = copy.storage[i];
}

void NumberStorage::Print()
{
	for (uint32_t i = 0; i < elementsCount; ++i)
		std::cout << storage[i] << '\t';
	std::cout << std::endl;
}

NumberStorage::~NumberStorage()
{
	delete[] storage;
	usedMemory -= elementsCount * sizeof(int);
	//std::cout << ""
}
