#pragma once
#include <iostream>
#include <ctime>

class NumberStorage
{
private:
	int* storage;
	uint32_t elementsCount;
	static uint32_t usedMemory;

public:
	static void SetNumber(uint32_t value = 0) { usedMemory = 0; }
	static uint32_t GetNumber() { return usedMemory; }

	NumberStorage(uint32_t _elementsCount);
	NumberStorage(const NumberStorage&);

	void Print();

	~NumberStorage();
};

