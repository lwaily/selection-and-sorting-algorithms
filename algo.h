#ifndef ALG_H
#define ALG_H

#include <iostream>
#include <vector>
#include <algorithm>

/**
 * Class
 */
class alg {
	public:
		/**
		 * Search Algorithms:
		 *	- Binary Search
		 */
		int binary_search(std::vector<int> input);
		
		/**
		 * Sorting Algorithms:
		 *	- Bubble Sort
		 *	- Selection Sort (a.k.a.: Min Sort)
		 *	- Merge Sort
		 *  - Quick Sort
		 */
		std::vector<int> bubble_sort(std::vector<int> input);
		std::vector<int> selection_sort(std::vector<int> input);
		std::vector<int> merge_sort_r(std::vector<int> input);
		std::vector<int> quick_sort(std::vector<int> input);

		/** 
		 * Selection Algorithms:
		 * 	- Quick Selection (randomized selection)
		 *  - Median of Medians (deterministic)
		 */
		int quick_select(std::vector<int> arr, int k);
		int median_of_medians(std::vector<int> arr, int k);

		/** */
		unsigned int collatz_conjecture(unsigned int n);
};
#endif
