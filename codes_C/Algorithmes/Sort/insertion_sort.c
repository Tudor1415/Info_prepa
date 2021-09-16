#include <stdio.h>

/*
This is a basic implementation of the insertion sort algorithm.

INPUT:
- Size of the unsorted array.
- Unsorted array of size n filling it element by element.

OUTPUT:
- Sorted array.
 */

int main(){
	int n;
	printf("Input the size of the array: ");
	scanf("%d", &n);
	// Preparing the input array
	int array[n];
	printf("Input the elements of the array. \n");
	for(int i=0; i<n; i++)
		scanf("%d", &array[i]);
	// Insertion sort algorithm
	for(int i=1; i<n; ++i){
		int tmp = array[i];
		int j = i;
		while(j>0 && array[j-1] > tmp){
			array[j] = array[j-1];
			--j;
		}
		array[j] = tmp;
	}

	for(int i=0; i<n; i++)
		printf("%d ", array[i]);
	printf("\n"); 

}
