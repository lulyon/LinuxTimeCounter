#ifndef TIME_COUNTER_H_
#define TIME_COUNTER_H_


class TimeCounter {
private:
	long cur_time_;
public:
	TimeCounter();
	~TimeCounter();
	void reset();
	double getTimeCount();
};

#endif //TIME_COUNTER_H_
