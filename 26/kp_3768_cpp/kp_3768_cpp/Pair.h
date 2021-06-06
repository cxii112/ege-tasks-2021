#pragma once
class Pair
{
public:
	int first;
	int second;
	int average;

	Pair(const int f, const int s) {
		first = f;
		second = s;
		average = (first + second) / 2;
	}
};

