#pragma once
#include <string> 
#include <iostream>

using namespace std;

class Progressions 
{
public:
	Progressions();
	virtual ~Progressions() = 0;

	virtual void fill() = 0;
	virtual void print() = 0;
	virtual void sum(int size) = 0;
	virtual int getSize() = 0;

private:
	double a, d;
};