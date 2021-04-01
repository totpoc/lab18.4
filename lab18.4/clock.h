#include "triad.h"
#include <iostream>
#include <Windows.h>
using namespace std;

class CLOCK : public TRIAD
{
public:
	CLOCK(int first, int second, int third) :TRIAD(first, second, third) {}
	~CLOCK() {}
};