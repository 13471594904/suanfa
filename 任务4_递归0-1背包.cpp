#include<iostream>
using namespace std;
 
const int W = 150;  //容量 
const int number = 5; //物品数量 
const int VALUE[] = {50, 40, 20, 60, 90};   //物品价值 
const int WEIGHT[] = {20, 30, 50, 60, 70};   //物品重量 
 
int Make(int i, int j)
{  
	int r1 = 0;
	int r2 = 0;
	int r = 0;
	
	if (i == -1)
	{
		return 0;
	}
 
	if(j >= WEIGHT[i])   //背包剩余空间可以放下物品 i  
	{
		r1 = Make(i-1,j - WEIGHT[i]) + VALUE[i]; //第i件物品放入所能得到的价值
		r2 = Make(i-1,j); //第i件物品不放所能得到的价值  
		r = (r1>r2)?r1:r2;
	}   
 
	return r;
}
 
 
int main()
{
	int maxValue = Make(number-1, W);
	cout<<"maxValue: "<<maxValue<<endl;
}
