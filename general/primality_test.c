#include <math.h>
#include <stdbool.h>


bool primality_test(int n)
{
	int i = 2;
	int floor_nsqr_root = (int)sqrt((double)n);
	
	for (i=2; i <= floor_nsqr_root; i++){
		if (n % i == 0){
			return false;
		}
	}
	
	return true;
}
