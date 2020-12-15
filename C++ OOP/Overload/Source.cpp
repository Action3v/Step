#include <iostream>;
#include "Date.h";
using namespace std;

int main()
{
	Date d1(12, 12, 12);
	Date d2(3, 3, 3);
	Date result = d1 - d2;
	result.Show();

	Date d3(5, 5, 2020);
	Date res = d3 + 400;
	res.Show();
}