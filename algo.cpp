/**
 * Name:  Ali Alwaily
 * Date:  24 June 2026
 * About: 
 */

#include "algo.h"

/**
 * ..
 */
int alg::binary_search(std::vector<int> input){
	return 0;
}

/** ------------------------------------------------------------------------- */

/**
 * ..
 */
std::vector<int> alg::bubble_sort(std::vector<int> input){
	int n = input.size();
	
	for(int i = 0; i < n-1; ++i){
		for(int j = 0; j < n-i; ++j){
			if(input[j] > input[j+1]){
				int temp = input[j];
				input[j] = input[j+1];
				input[j+1] = temp;
			}
		}
	}
	return input;
}

/** ------------------------------------------------------------------------- */

/** 
 * //
 */
int alg::quick_select(std::vector<int> arr, int k){
	if(arr.size() == 1){
		return arr[0];
	}
	// pick a random integer in the list v.
	int v = rand() % arr.size();
	//int element = arr[v];
    
	// Split the list into sets SL, Sv, SR. partition .
	std::vector<int> SL(arr.begin(), arr[v]);
	std::vector<int> Sv(arr[v], arr[v]);
	std::vector<int> SR(arr[v], arr.end());
	
	if(k <= SL.size()){
		return quick_select(SL,k);
	} else if(k <= (SL.size() + Sv.size())){
		return v;
	} else {
		return quick_select(SR,k-SL.size()-Sv.size());
	}	
	return -1;
}

/**
 * //
 */
int alg::median_of_medians(std::vector<int> arr, int k){
	return 1;
}

/** ------------------------------------------------------------------------- */

/**
 * ..
 */
unsigned int alg::collatz_conjecture(unsigned int n){
	unsigned int count;
	while(n > 1) {
		if(n % 2 == 0) { n /= 2; } 
		else { n = 3*n + 1; }
		++count;
	}
	return count;
}

