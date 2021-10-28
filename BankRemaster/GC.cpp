#include "GC.h"

Bank::GC::GC(int i)
{
	this->count = i;
}

void Bank::GC::incr()
{
	this->count++;
}

int Bank::GC::decr()
{
	return --this->count;
}
