#include "Array.h"
#include <iostream>

int main()
{
	Array arr1(20);
	Array arr2(arr1);

	arr1.Fill();
	arr1.Show();

	arr1.Sort();
	arr1.Show();
}

