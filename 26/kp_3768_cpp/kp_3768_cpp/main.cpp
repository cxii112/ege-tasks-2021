#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <algorithm>

#include "Pair.h"

int min(int f, int s) {
	if (f < s) return f;
	return s;
}

std::vector<int> slice(
	std::vector<int> *source,
	int front,
	int back
) {
	std::vector<int> result;
	for (auto i = front; i <= back; i++) {
		result.push_back((*source)[i]);
	};
	return result;
}

bool check(int fm, int sm) { return (fm + sm) / 10 == 0; }

void findPairs(std::vector<int> *source, std::vector<Pair> *pairsRef) {
	const int F = (*source)[0];
	for (int i = 1; i < (*source).capacity(); i++) {
		if (check(F, (*source)[i])) {
			(*pairsRef).push_back(Pair(F, (*source)[i]));
		}
	}
}

int main() {
	std::string TEST_FILE_NAME = 
		"F:\\studying-notes\\ege\\info\\Source\\26-52test.txt";
	int LIMIT = 3;

	std::ifstream ifs;

	ifs.open(TEST_FILE_NAME);
	if (!ifs.is_open()) return EXIT_FAILURE;

	std::string temp;
	ifs >> temp;

	int count = atoi(temp.c_str());
	std::vector<int> sequence;
	for (int i = 0; i < count; i++) {
		ifs >> temp;
		sequence.push_back(atoi(temp.c_str()));
	}
	std::sort(sequence.begin(), sequence.end());
	
	std::vector<Pair> pairs;
	for (int i = 0; i < sequence.capacity(); i++) {
		std::vector<int> vTemp = slice(
			&sequence,
			i,
			min(sequence.capacity() - 1, i + LIMIT));
		findPairs(&vTemp, &pairs);
	}

	int minAverage = INT_MAX;
	for (int i = 0; i < pairs.capacity(); i++) {
		minAverage = min(minAverage, pairs[i].average);
	}


	std::cout << pairs.capacity() << ' ' << minAverage << std::endl;
	return EXIT_SUCCESS;
}