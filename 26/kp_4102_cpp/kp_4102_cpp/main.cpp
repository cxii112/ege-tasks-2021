#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <algorithm>

int findLoad(std::vector<int>* source, const int maxCapacity) {
	int currentCapacity = maxCapacity;

	int idx = source->back();

	return source->data()[idx];
}

int main() {

	const std::string TEST_FILE_NAME = "F:/studying-notes/ege/info/Source/26-55test.txt";
	std::ifstream ifs;
	ifs.open(TEST_FILE_NAME);

	if (!ifs.is_open()) return EXIT_FAILURE;


	std::string temp;
	ifs >> temp;
	int count;
	count = atoi(temp.c_str());
	std::cout << count << std::endl;

	ifs >> temp;
	int capacity;
	capacity = atoi(temp.c_str());
	std::cout << capacity << std::endl;
	std::cout << std::endl;

	std::vector<int> loads;
	for (int i = 0; i < count; i++) {
		ifs >> temp;
		int itemp = atoi(temp.c_str());
		loads.push_back(itemp);
	}
	std::sort(loads.begin(), loads.end());
	for (auto i : loads) {
		std::cout << i << std::endl;
	}

	std::cout << "findLoad" << findLoad(&loads, capacity) << std::endl;

	return EXIT_SUCCESS;
}
