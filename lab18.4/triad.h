#pragma once
#include <iostream>
using namespace std;

class TRIAD
{
	int _first, _second, _third;

public:

	TRIAD();
	TRIAD(int first, int second, int third);
	TRIAD(const TRIAD& temp);
	~TRIAD() {}

	void setFirst(int first);
	void setSecond(int second);
	void setThird(int third);

	int getFirst();
	int getSecond();
	int getThird();

	friend bool     operator==  (const TRIAD& c1, const TRIAD& c2);
	friend bool     operator!=  (const TRIAD& c1, const TRIAD& c2);
	friend istream& operator >> (istream& in, TRIAD& temp);
	friend ostream& operator << (ostream& out, TRIAD& temp);
};