#include <iostream>

void input(int arr[], int size);
void display(int arr[], int size);
void bubbleSort(int arr[], int size);

int main() {

	int size;

	std::cout << "Enter size: ";
	std::cin >> size;

	if(size >= 100) {
		std::cout << "Invalid size!\n";
		return -1;
	}
	int arr[size];

	input(arr, size);

	std::cout << "Array before sort: ";
	display(arr, size);

	bubbleSort(arr, size);
	
	std::cout << "\nArray after sort: ";
	display(arr, size);

	return 0;
}


void input(int arr[], int size) {
	for(int i = 0; i < size; i++) {
		std::cout << "arr[" << i << "]: ";
		std::cin >> arr[i];
	}
}

void display(int arr[], int size) {
	for(int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
}

void bubbleSort(int arr[], int size) {

	int temp = 0;
	for(int i = 0; i < size - 1; i++) {
		for(int j = 0; j < size - i -1; j++) {
			if(arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	 }
}
