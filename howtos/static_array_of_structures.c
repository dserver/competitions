#include <stdlib.h>
#include <stdio.h>

typedef struct _factorial
{
	int number;
	int tens;
	int fives;
	int twos;
} Factorial;

int main(void){

	
	
	Factorial farray[10];
	
	
	int i;
	int k;
	for (i=10, k=0; i > 0; i--, k++){
		farray[k].number = i;
	}
	
	
	for(i=0; i < 10; i++){
		printf("%d\n", farray[i].number);
	}
	
	
	return 0;
}

