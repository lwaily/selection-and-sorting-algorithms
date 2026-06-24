#include "algo.h"

int main(){
	
	/**
	 * Testing Bubble Sort
	 */
	std::vector<int> unsorted;

	unsorted.push_back(3);
	unsorted.push_back(6);
	unsorted.push_back(1);
	unsorted.push_back(4);
	unsorted.push_back(8);
	unsorted.push_back(10);
	unsorted.push_back(5);
	unsorted.push_back(2);
	unsorted.push_back(12);
	unsorted.push_back(1);

	alg alg_obj;

	std::vector<int> sorted = alg_obj.bubble_sort(unsorted);

	int n = sorted.size();
	for(int i = 0; i < n; ++i){
		std::cout << sorted[i] << " ";
	}
	std::cout << std::endl;


	return 0;
}
