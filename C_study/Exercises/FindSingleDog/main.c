#define _CRT_SECURE_NO_WARNINGS 1

/*  一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
	编写一个函数找出这两个只出现一次的数字。  */

#include<stdio.h>

int main() 
{
	int arr[13] = { 1, 3 ,4, 6, 2, 7, 3, 1, 8, 6, 7, 4, 9 };
	//存储arr数组中数值出现的次数
	//最原始位置会增加，其余赋值为-1
	int fre[13] = { 0 };
	//存储所求的两个数值的下标
	int ret1 = -1, ret2 = -1;
	//判断只出现一次的数值
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		//每进入一次for循环，频率加一
		fre[i]++;
		for (int j = i + 1; j < sizeof(arr) / sizeof(arr[0]); j++)
		{
			if (arr[i] == arr[j])
			{
				fre[i]++;
				fre[j]++;
				break;
			}
		}
		//该数值只出现一次
		if (fre[i] == 1)
		{
			if (ret1 == -1) 
			{
				ret1 = i;
			}
			else 
			{
				ret2 = i;
			}
		}
	}

	if (ret1 == -1) 
	{
		printf("没找到符合题意的数值！\n");
	}
	else 
	{
		printf("找到了：%d , %d\n", arr[ret1], arr[ret2]);
	}
	return 0;
}

