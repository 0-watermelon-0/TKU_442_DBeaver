#include <iostream>
#include <string>


int* input_array(const size_t size) {
	int* array = new int[size];
	cout << "Input array data(int type)\n";
	for (size_t index = 0; index < size; index++)
		cin >> array[index];
	return array;
}

void sort_bubble(int* array, const size_t size) {
	for (size_t i = 0; i < size - 1; i++) {
		for (size_t j = i + 1; j < size; j++) {
			if (array[i] > array[j]) {
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

int get_max_element_of_array(int* array, const size_t capability) {
	int max_element = array[0];
	for (size_t i = 0; i < capability - 1; i++) {
		if (array[i] < array[i + 1])
			max_element = array[i + 1];
	}
	return max_element;
}

int get_min_element_of_array(int* array, const size_t size) {
	int min_element = array[0];
	for (size_t i = 0; i < size - 1; i++) {
		if (array[i + 1] < array[i])
			min_element = array[i + 1];
	}
	return min_element;
}

string to_string_array(int* array, const size_t size) {
	string out;
	for (size_t i = 0; i < size; i++)
		out += to_string(array[i]);
	return out;
}
