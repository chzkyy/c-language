#include <stdio.h>
#define SIZE 10

int main() {
	int data[SIZE] = { 35, 24, 32, 8, 1, 10, 78, 5, 52, 9 };
	int swap;
	for (int i = 0; i < SIZE -1; i++){
		for (int j = 0; j < SIZE -i -1; j++){
			if (data[j] > data[j + 1]){
				swap = data[j];
				data[j] = data[j + 1];
				data[j + 1] = swap;
			}
		}
	}
	
	for (int i = 0; i < SIZE; i++){
		printf("%d\t", data[i]);
	}
	
	return 0;
}
