#define _CRT_SECURE_NO_WARNINGS 1

/*  һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
	��дһ�������ҳ�������ֻ����һ�ε����֡�  */

#include<stdio.h>

int main() 
{
	int arr[13] = { 1, 3 ,4, 6, 2, 7, 3, 1, 8, 6, 7, 4, 9 };
	//�洢arr��������ֵ���ֵĴ���
	//��ԭʼλ�û����ӣ����ำֵΪ-1
	int fre[13] = { 0 };
	//�洢�����������ֵ���±�
	int ret1 = -1, ret2 = -1;
	//�ж�ֻ����һ�ε���ֵ
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		//ÿ����һ��forѭ����Ƶ�ʼ�һ
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
		//����ֵֻ����һ��
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
		printf("û�ҵ������������ֵ��\n");
	}
	else 
	{
		printf("�ҵ��ˣ�%d , %d\n", arr[ret1], arr[ret2]);
	}
	return 0;
}

