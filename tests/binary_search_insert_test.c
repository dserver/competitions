#include <stdio.h>
#include <stdlib.h>
#include "insert_into_sorted_array.c"

// gcc binary_search_insert_test.c -I../general
// will compile
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
	int r;
	for (i=0; i < length+1; i++){
		r = binary_search(a, i+1, length);
		printf("%d was found at position %d\n", i, r);
	}
	
	
	return 0;
}