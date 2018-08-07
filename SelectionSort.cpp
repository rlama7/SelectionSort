/**
 * @file 		SelectionSort.cpp
 * @brief 		A program to implement Selection Sort
 * 				worst case time complexity: O(n^2)
 * @date		07/27/2018
 * 
 * @Algorithm
 * 
 * Smallest --> Final Position
 * Steps:
 * 1) Begin with first element in the array as the minimum value.
 * 2) Compare the minimum value with the next element in the array
 * 3) If the minimum value > the next element swap the value
 * 4) else move to the next element to compare.
 * 5) At the end of each pass swap the minimum value to the correct index position in the array
 * 6) Repeat the process until values are in their proper position
 * 
 * Outputs a sorted array in ascending order
 */
 
#include <iostream>

using namespace std;

// Function Prototypes
void SelectionSort(int Array[], int array_size);		


// Begin Main
int main() {
	int Array[] = {2,7,4,1,3,0,9};
		
	SelectionSort(Array, 7);
	
	cout << "[";
	for (int i=0; i<7; i++) {
		cout << Array[i] << " ";
	}
	cout << "]";
	
	cout << "\n--------------------------------------------------\n" << endl;
	return 0;
} // end main


// Function SelectionSort()

void SelectionSort(int Array[], int array_size) {
	
	for (int i=0; i < array_size; i++) {
		int iMin = i;								// consider 0th element as the minimum value to begin with
		
		for (int j = i+1; j < array_size; j++) {	// we start comparing minimum value with the next value 
			
			if (Array[j] < Array[iMin]) {		// if we find a smaller value
				iMin = j;						// update the index of minimum element
			}
		}
		// after we exhaust comparison we swap the minimum value 
		// at the correct index position in the array
		// Using swap function
		swap(Array[i], Array[iMin]);
	}
} // end SelectionSort()
