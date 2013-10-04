//============================================================================
// Name        : LinuxTimeCounter.cpp
// Author      : luliang
// Version     :
// Copyright   : Your copyright notice
// Description : TimeCounter Test in C++, Ansi-style
//============================================================================

#include "TimeCounter.h"

#include <stdio.h>

int main() {
	TimeCounter timer;
	for(int i = 0; i < 100000000; ++i);
	timer.printTimeCount();

	for(int i = 0; i < 100000000; ++i);
	timer.printTimeCount();

	return 0;
}
