#include <stdio.h>
#include "insert_into_sorted_array.h"

int main()
{
	int length = 10;
	int * a = (int *) malloc(sizeof(int) * length);
	
	int i;
	for (i=0; i < length; i++){ // initialize array with 1, 2, 3...length
		a[i] = i + 1;
	}
	
	// need to loop through and check if each value is there.
	// finally check for a value that isn't in the array
	int r = binary_search(a, 1, length);
	printf("1 was found at position %d\n", r);
	
	r = binary_search(1, 8)
	return 0;
}