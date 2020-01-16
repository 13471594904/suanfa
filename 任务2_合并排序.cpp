#include <stdio.h>  
#include <stdlib.h>  
#include <malloc.h>   
void merge(int src[], int des[], int left, int right ,int mid)  
{  
    int i = left;  
    int k = left;  
    int j = mid + 1;  
  
    while (( i <= mid ) && ( j <= right ))  
    {  
        if (src[i] < src[j])  
        {  
            des[k++] = src[i++];  
        }  
        else  
        {  
            des[k++] = src[j++];  
        }         
    }  
    while (i <= mid)  
    {  
        des[k++] = src[i++];  
    }  
    while (j <= right)  
    {  
        des[k++] = src[j++];  
    }  
}  
  
void MSort(int src[], int des[] ,int left, int right, int max_size)  
{  
    int mid = (left + right) / 2;  
    if (left == right)  
    {  
        des[left] = src[left];  
    }  
    else  
    {  
        int mid = (left + right) / 2;  
        int * des_space = (int *)malloc(sizeof(int) * max_size);  
  
        if (NULL != des_space)  
        {  
            MSort( src, des_space, left, mid, max_size);  
            MSort( src, des_space, mid+1, right, max_size);  
  
            merge( des_space, des, left, right, mid);  
        }     
  
        free(des_space);  
    }  
}  
  
void Meger_Msort(int arr[], int left, int right, int len)  
{  
    MSort( arr, arr, left, right, len);  
}  
  
int main(void)  
{  
    int arr[]={6,5,2,4,7,9,3,8,1,10};
    int i; 
     
    printf("排序前:\n");  //打印排序前的数据  
    for (i = 0; i < 10; i++)  
    {  
        printf("%d ",arr[i]);  
    }  
    //开始排序  
    Meger_Msort( arr, 0, 10-1, 10);  
  
    printf("\n排序后:\n"); //打印排序后的数据  
    for (i = 0; i < 10; i++)  
    {  
        printf("%d ",arr[i]);  
    }  
    system("pause");  
    return 0;  
}
