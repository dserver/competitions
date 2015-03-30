/*
  Let A the input sorted in ascending order and B be an array of factorials already computed.
  Let i=0 and A[i] be the factorial we are computing. Let k=0. When we are done computing the
  factorial of A[i] insert it into B at position k, and incrementing k. B will automatically be in sorted order
  since it is essentially a copy of A.
  
  While computing num_zeros of A[i] a value c=A[i] and c is divided each time a factor of 10, 5, or 2 is found.
  Check if c is in B. If it is then the factors of 10, 5, and 2 can be added to the factors found so far
  and the function can return. 
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>



typedef struct _factorial
{
	int number;
	int tens;
	int fives;
	int twos;
} Factorial;


int num_zeros(int x);
void sort_input(int a[], int length);


int main()
{
	int input_size;
	scanf("%d", &input_size);
	
	int input[] = (int *) malloc(input_size * sizeof(int));
	
	for (int i = 0; i < input_size; i++){
		scanf("%d", &input[i]);
	}
	
	
	
}


int num_zeros(int n)
{
	int x;
	int d;
	int twos = 0;
	int fives = 0;
	int zeros = 0;
	
	x=1;
	while (x <= n)
	{
		int c = x;
		if (c % 10 == 0)
		{
			while (c % 10 == 0){
				c = c / 10;
				zeros++;
			}
		}
		if (c % 5 == 0){
			while (c % 5 == 0){
				c = c / 5;
				fives++;
			}
		}
		if (c % 2 == 0){
			while (c % 2 == 0){
				c = c / 2;
				twos++;
			}
		}
		
		x++;
	}
	
	while (twos > 0 && fives > 0){
		zeros++;
		twos--;
		fives--;
	}
	
	return zeros;
}

void sort_input(int a[], int length)
{
	
}