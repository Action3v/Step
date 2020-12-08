#pragma once
class Array
{
private:
	int size;
	int* massiv;
public:
	Array(int _size = 10);
	Array(int* _massiv);
	Array(const Array& copy);

	void Fill();
	void Show();
	void Sort();

	~Array();
};