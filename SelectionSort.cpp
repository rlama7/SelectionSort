/**
 * @file 		SelectionSort.cpp
 * @brief 		A program to implement Selection Sort
 * 				worst case time complexity: O(n^2)
 * @date		07/27/2018
 * 
 * @Algorithm
 * Inputs an array to be sorted
 * A) for i = 0 to Array length -1, set minimum to i
 * B) for j = i+1 to Array length :
 * 		a) if A[j] < A[minimum]
 * 				then set minimum to j
 * C) Swap A[i] with A[minimum]
 * Outputs a sorted array in ascending order
 */
 
#include <iostream>

using namespace std;

// Function Prototypes
void SelectionSort(int list[], int size);		


// Begin Main
int main() {
	int list[] = {2,7,4,1,3,0,9};
		
	SelectionSort(list, 7);
	
	cout << "[";
	for (int i=0; i<7; i++) {
		cout << list[i] << " ";
	}
	cout << "]";
	
	cout << "\n--------------------------------------------------\n" << endl;
	return 0;
} // end main


// Function SelectionSort()

void SelectionSort(int sort_list[], int size) {
	
	for (int i=0; i < size-1; i++) {		// we need to n-2 passes
		int iMin = i;					// ith position: elements from i till n-1 are candidates
		
		for (int j = i+1; j < size; j++) {
			
			if (sort_list[j] < sort_list[iMin]) {		// if we find a smaller value
				iMin = j;				// update the index of minimum element
			}
		}
		
		int temp = sort_list[i];
		sort_list[i] = sort_list[iMin];
		sort_list[iMin] = temp;				// swap
	}
} // end SelectionSort()
