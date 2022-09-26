#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define EXIT_SUCCESS 0

void swap(int* prev_value, int* next_value) {
	int temp = (int) malloc(sizeof(int));
	
	temp = *prev_value;
	*prev_value = *next_value;
	*next_value = temp;
}

void bubble_sort(int* arr, int size) {
	int unsigned i = (int unsigned) malloc(sizeof(int unsigned));

	if (size < 1) return;

	for (i = 0; i < size; i++) {
		if (arr[i] > arr[i + 1]) {
			swap(&arr[i], &arr[i + 1]);
		}
	}

	bubble_sort(arr, size - 1);
}

void print_array(int* arr, int size) {
	int unsigned i = (int unsigned) malloc(sizeof(int unsigned));

	printf("Sorted Array\n");
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
}

void fill_array(int* arr, int size) {
	int unsigned i = (int unsigned) malloc(sizeof(int unsigned));
	
	for (i = 0; i < size; i++) {
		arr[i] = rand();
	}
}

// Driver program to test above functions
int main() {
	int size = (int) malloc(sizeof(int));
	srand(size);

	do {
		printf("Insert the size of array:\n>: ");
		scanf("%d", &size);

		if (size <= 0) {
			printf("\nInsert a positive and different of 0");
		}
	} while(size <= 0);

	int *arr = (int*) malloc(sizeof(int*) * (size - 1));

	fill_array(arr, size);
	bubble_sort(arr, size);
	print_array(arr, size);

	free(arr);

	return EXIT_SUCCESS;
}