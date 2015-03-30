
int binary_search(int a[], int num, int length);
void insert_into_sorted_array(int a[], int num, int length);


int binary_search(int a[], int num, int length)
{
	int low = 0;
	int high = length - 1;
	int mid;
	
	while (low <= high)
	{
		mid = (high+low)/2;
		if (a[mid] < num){
			low = mid + 1;
		} else if (a[mid] > num) {
			high = mid - 1;
		} else if (a[mid] == num) {
			return mid;
		}
	}
	
	return -1;
}


void insert_into_sorted_array(int a[], int num, int length)
{
	
}