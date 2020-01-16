#include <stdio.h>
#define ARRAY_SIZE 10
int BinarySearch(int array[], int left, int right, int NumToSearch)
{
	int mid = (left + right) / 2;
	if (left <= right)
	{
		if (NumToSearch == array[mid])
		{
			return mid;
		}
		else if (NumToSearch < array[mid])
		{
			right = mid - 1;
			return BinarySearch(array, left, right, NumToSearch);
		}
		else
		{
			left = mid + 1;
			return BinarySearch(array, left, right, NumToSearch);
		}
	}
	return -1;
}
int main()
{
	int a[ARRAY_SIZE] = {1,2,3,4,5,6,7,8,9,10};
	int result = 0;
	int x = 5;
	int left = 0;
	int right = ARRAY_SIZE - 1;
	result = BinarySearch(a, left, right, x);
	if (result == -1)
	{
		printf("Not Found!\n");
	}
	else
	{
		printf("ÕÒµ½ÁË%d , ÔÚa[%d]\n", x, result);
	}
	return 0;
}

