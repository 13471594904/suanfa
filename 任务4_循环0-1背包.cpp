
#include<iostream>
using namespace std;
 
const int W = 150;  //����
const int number = 5;  //��Ʒ����
const int VALUE[] = {50, 40, 20, 60, 90};  //��Ʒ��ֵ
const int WEIGHT[] = {20, 30, 50, 60, 70};  //��Ʒ����
int f[151];
 
void Pack(int w, int v) 
{
	for(int x = W; x >= w; x--)
		f[x]=(f[x] > (f[x-w]+v))?f[x]:(f[x-w]+v);
}
 
int main()
{
	for (int i=0; i < 151; i++)
	{
		f[i] = 0;
	}
	for (int j=0; j < number; j++)
	{
		Pack(WEIGHT[j], VALUE[j]);
	}
	cout<<"maxValue: "<<f[W]<<endl;
}
