#ifndef _LARGENUMBER_H_
#define _LARGENUMBER_H_
#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std;

class LargeNumber {
private:
	vector <int> arra;

public:
	LargeNumber();
	friend LargeNumber operator +(const LargeNumber &l1, const LargeNumber &l2);
	friend LargeNumber operator -(const LargeNumber &l1, const LargeNumber &l2);
	friend LargeNumber operator *(const LargeNumber &l1, const LargeNumber &l2);
	friend LargeNumber operator /(const LargeNumber &l1, const LargeNumber &l2);
};
#endif // !