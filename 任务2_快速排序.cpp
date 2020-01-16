#include <stdio.h>
int data(int array[],int left,int right)
{
	int key=array[left];
	while (left < right) 
	{
		while (left < right && array[right] >= key)
		{ 
			right--; 
		}
		if(left<right)
		{
			array[left] = array[right]; 	
		} 
		while (left < right && array[left] <= key)
		{ 
			left++; 
		}
		if(left<right)
		{
			array[right] = array[left];	
		} 
	} 
	array[left] = key; 	
	return left;
} 

void quickSort(int array[],int left,int right)
{
	if(left<right)
	{
		int standard=data(array,left,right);
		quickSort(array, 0, standard - 1);
		quickSort(array, standard + 1, right);
	}
}

int main()
{
	int array[]={6,5,2,4,7,9,3,8,1};
	int size= sizeof(array) / sizeof(int);
	quickSort(array,0,size-1);
	printf("ÅÅĞòµÄÊı×é£º");
	for(int i=0;i<size;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
	return 0;
}