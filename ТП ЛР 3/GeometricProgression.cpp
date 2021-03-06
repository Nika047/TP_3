#include "GeometricProgression.h"

using namespace std;

GeometricProgression::GeometricProgression() {}
GeometricProgression::~GeometricProgression() 
{
	ofstream fin(fileName);

	fin << size;
	fin << endl;

	for (int i = 0; i < size; i++) {
		fin << data[i];
		fin << endl;
	}

	fin.close();

	delete[] data;
}

void GeometricProgression::fill()
{
	cout << "??????? a (?????? ???? ??????????): ";
	cin >> a;

	cout << "??????? d (?????????): ";
	cin >> dq;

	cout << "??????? n (??????): ";
	cin >> size;

	delete data;
	data = (double*)malloc(size * sizeof(double));

	double x = a;

	for (int i = 0; i < size; i++)
	{
		data[i] = x;
		x *= dq;
	}
}

void GeometricProgression::print()
{
	double y = a;

	if (size == 0)
	{
		cout << "?????????? ?????" << endl << endl;
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			cout << " || " << y;
			y *= dq;
		}
		cout << " || " << endl;
	}
}

void GeometricProgression::sum(int size)
{
	double s = 1;
	for (int i = 0; i < size; i++)
	{
		s+= data[i];
	}
	cout << "????? ?????: " << s;
}

int GeometricProgression::getSize()
{
	return size;
}
