#include <iostream>

void input(int arr[], int size);
void display(int arr[], int size);
int linearSearch(int arr[], int size);


int main() {

        int size;
        std::cout << "Enter size: ";
        std::cin >> size;

        if(size >= 100) {
                std::cout << "Invalid size\n";
        }

        int arr[size];

        std::cout << "Enter elements: \n";
        input(arr, size);

        std::cout << "The given array: \n";
        display(arr, size);

        int result = linearSearch(arr, size);

	if(result == -1)  {
		std::cout << "\nELement not found";
		return -1;
	}

        std::cout << "\nElement found at index: " << result;

}


void input(int arr[], int size) {
	std::cout << std::endl;
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

int linearSearch(int arr[], int size) {
	int element;
	std::cout << "\nEnter the element you want to find: ";
	std::cin >> element;

	for(int i = 0; i < size; i++) {
		if(element == arr[i]) {
			return i;
		}
	}
	return -1;
}

