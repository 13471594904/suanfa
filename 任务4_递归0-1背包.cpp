#include<iostream>
using namespace std;
 
const int W = 150;  //���� 
const int number = 5; //��Ʒ���� 
const int VALUE[] = {50, 40, 20, 60, 90};   //��Ʒ��ֵ 
const int WEIGHT[] = {20, 30, 50, 60, 70};   //��Ʒ���� 
 
int Make(int i, int j)
{  
	int r1 = 0;
	int r2 = 0;
	int r = 0;
	
	if (i == -1)
	{
		return 0;
	}
 
	if(j >= WEIGHT[i])   //����ʣ��ռ���Է�����Ʒ i  
	{
		r1 = Make(i-1,j - WEIGHT[i]) + VALUE[i]; //��i����Ʒ�������ܵõ��ļ�ֵ
		r2 = Make(i-1,j); //��i����Ʒ�������ܵõ��ļ�ֵ  
		r = (r1>r2)?r1:r2;
	}   
 
	return r;
}
 
 
int main()
{
	int maxValue = Make(number-1, W);
	cout<<"maxValue: "<<maxValue<<endl;
}
