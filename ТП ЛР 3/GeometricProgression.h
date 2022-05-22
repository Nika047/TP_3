#pragma once
#include <iostream>
#include <fstream>
#include "Progressions.h"

using namespace std;

class GeometricProgression : public Progressions
{
public:
	GeometricProgression();
	~GeometricProgression();

	void fill() override;
	void print() override;
	void sum(int size) override;
	int getSize();

private:
	int size;
	double* data;
	double a, dq;
	string fileName = "GP3.txt";
}; 