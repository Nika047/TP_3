#include "ArithmeticProgression.h"

using namespace std;

ArithmeticProgression::ArithmeticProgression() {}

void ArithmeticProgression::fill()
{
	cout << "??????? a (?????? ???? ??????????): ";
	cin >> a;

	cout << "??????? d (?????????? ????????): ";
	cin >> dq;

	cout << "??????? n (??????): ";
	cin >> size;

	delete data;
	data = (double *)malloc(size * sizeof(double));

	double x = a;

	for (int i = 0; i < size; i++)
	{
		data[i] = x;
		x += dq;
	}
}

ArithmeticProgression::~ArithmeticProgression() 
{
	ofstream fin(fileName);

	fin << size;
	fin << endl;

	for (int i = 0; i < size; i++) 
	{
		fin << data[i];
		fin << endl;
	}

	fin.close();
	delete[] data;
}

void ArithmeticProgression::print()
{
	double y = a;

	if (size == 0)
		cout << "?????????? ?????" << endl << endl;
	
	else
	{
		for (int i = 0; i < size; i++)
		{
			cout << " || " << y;
			y += dq;
		}
		cout << " || "<< endl;
	}
}

void ArithmeticProgression::sum(int size)
{
	double s = 0;
	for (int i = 0; i < size; i++)
	{
		s += data[i];
	}
	cout << "????? ?????: " << s;
}

int ArithmeticProgression::getSize()
{
	return size;
}