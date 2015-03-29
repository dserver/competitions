#include <stdio.h>
#include <stdbool.h>
#include "primality_test.h"


int main(void)
{
	int x = 17;
	bool r = primality_test(x);
	
	if (r)
		printf("%d is prime.", x);
	else
		printf("%d is not prime.", x);
	
	x = 30;
	r = primality_test(x);
	if (r)
		printf("%d is prime.", x);
	else
		printf("%d is not prime.", x);
	
	return 0;
}