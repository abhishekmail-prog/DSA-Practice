#include <iostream>

void display(int arr[], int size);
int binarySearch(int arr[], int size, int element);

int main() {

	int arr[] =  {5, 3, 2, 1, 9, 12, 15};
	int size = sizeof(arr) / sizeof(int);
	int element;

	std::cout << "The given array: ";
	display(arr, size);
	std::cout << '\n';

	std::cout << "The element you want to find: ";
	std::cin >> element;

	int result = binarySearch(arr, size, element);

	if(result)
		std::cout << "Element found\n";
	else 
		std::cout << "Element not found\n";


	return 0;
}

void display(int arr[], int size) {
	for(int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
}

int binarySearch(int arr[], int size, int element) {
	int low = 0;
	int high = size - 1;
	int mid = 0;

	while(low <= high) {
		mid = low + (high - low) / 2;

		if(arr[mid] == element)
			return true;

		else if(arr[mid] > element) {
			low = mid+ 1;
		}

		else {
			high = mid - 1;
		}
	}
	return false;
}
