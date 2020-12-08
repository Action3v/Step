#include <iostream>
#include "String.h"

String::String(int _size)
{
	if (_size == 0)
		return;
	size = _size;
	str    = new char[size];
}

String::String(char* _str)
{
	if (_str == NULL)
		return;
	size = strlen(_str)+1;
	str    = new char[size];
	strcpy(str, _str);
}

//void String::SetString(char[])
//{
//	for (int i; i < size; i++)
//		str[i] = 
//}

String::~String()
{
	delete[] str;
}
