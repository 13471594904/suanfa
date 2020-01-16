#include <stdio.h>
int main()
{
	int a[10] = {0};
	int i = 0;
	int j = 0;
	int n;
	printf ("输入给定多少个数n:\n");
	scanf("%d", &n); 
	int k;
	printf ("输入查找的K个数:\n");
	scanf("%d", &k);
	
	int m = n; 
	printf ("输入%d个数，空格键分开:\n",n);
	while(m>0)
	{ 
		scanf("%d", &a[i]);
		m--;
		i++;
	}
	int temp;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("输出最小的%d个数:\n",k);
	for(i=0; i<k; i++)
	{
		printf("%4d", a[i]);
	}

	printf("\n");
	return 0;
}
