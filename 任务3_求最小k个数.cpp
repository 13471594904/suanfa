#include <stdio.h>
int main()
{
	int a[10] = {0};
	int i = 0;
	int j = 0;
	int n;
	printf ("����������ٸ���n:\n");
	scanf("%d", &n); 
	int k;
	printf ("������ҵ�K����:\n");
	scanf("%d", &k);
	
	int m = n; 
	printf ("����%d�������ո���ֿ�:\n",n);
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
	printf("�����С��%d����:\n",k);
	for(i=0; i<k; i++)
	{
		printf("%4d", a[i]);
	}

	printf("\n");
	return 0;
}
