#pragma once
#include <iostream>
#include <fstream>
#include "Progressions.h"

using namespace std;

class ArithmeticProgression : public Progressions
{
public:
	ArithmeticProgression();
	~ArithmeticProgression();

	void fill() override;
	void print() override;
	void sum(int size) override;
	int getSize();

private:
	int size;
	double *data;
	double a, dq;
	string fileName = "AP3.txt";
};