#pragma once

class String
{
private:
	char* str;
	int size;
public:
	String(int = 80);
	String(char*);
	String(const String& copyString)
	{
		size = copyString.size;
		str = new char[size + 1];
		strcpy(str, copyString.str);
	}

	//void SetString();

	char* Getstring();

	~String();
};