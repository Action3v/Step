#include "NumberStorage.h"
#include <iostream>
using namespace std;
int main()
{
	NumberStorage n1(10);
	cout << "Total count = " << NumberStorage::GetNumber() << endl;

	NumberStorage::SetNumber();

	NumberStorage n2(n1);

	n1.Print();
}