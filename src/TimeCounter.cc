/*
 * TimeCounter.cc
 *
 *  Created on: 2013-8-21
 *      Author: luliang
 */

#include "TimeCounter.h"

#include <sys/time.h>

TimeCounter::TimeCounter(): cur_time_(0)
{
	reset();
}

TimeCounter::~TimeCounter()
{

}

void TimeCounter::reset()
{
	struct timeval time;
	if(gettimeofday( &time, 0 )) return;
	cur_time_ = 1000000 * time.tv_sec + time.tv_usec;
}

double TimeCounter::getTimeCount()
{
	struct timeval time;
	if(gettimeofday( &time, 0 )) return -1;

	long cur_time = 1000000 * time.tv_sec + time.tv_usec;
	double sec = (cur_time - cur_time_) / 1000000.0;
	cur_time_ = cur_time;

	return sec;
}
