#include <iostream>

void printArray(int arr[], int size);
void reverseArray(int arr[], int size);

int main() {

	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(int);

	std::cout << "Array before reversal: \n";
	printArray(arr, size);

	// Calling reverse function
	reverseArray(arr, size);

	std::cout <<  std::endl;

	std::cout << "Array after reversal: \n";
	printArray(arr, size);

	return 0;
}

void printArray(int arr[], int size) {
	
	for(int i = 0; i < size; i++) {
		std::cout << "arr[" << i << "]: "<< arr[i] << '\n';
	}
}

void reverseArray(int arr[], int size) {
	
	// Taking left as first elemtent and right as last elsment.
	int left = 0;
	int right = size - 1;

	// Swapping left and right to make the array reverse.
	while(left < right) {

		int temp = arr[left];	
		arr[left] = arr[right];
		arr[right] = temp;

		left++;
		right--;
	}
	
}



