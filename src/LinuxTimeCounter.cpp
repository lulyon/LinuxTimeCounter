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
	printf("It takes %lf seconds since last time record\n", timer.getTimeCount());

	for(int i = 0; i < 100000000; ++i);
	printf("It takes %lf seconds since last time record\n", timer.getTimeCount());

	return 0;
}
