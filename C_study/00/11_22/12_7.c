//��ơ������
//����:ơ��2Ԫ1ƿ��4�����ӿ��Ի�һƿ��2����ƿ���Ի�һƿ
//����nԪǮ���Ժȶ���ƿ�ƣ�ʣ����ٿ�ƿ�͸���
//��: 15ƿ3����1ƿ��

#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int count = 0;//ơ������
	int number1 = 0;//��ƿ����
	int number2 = 0;//��������

	count = n / 2;
	number1 = count;
	number2 = count;
	//����ƿ��
	while (number1>1)
	{
		count += number1 / 2;
		int i = number1 % 2;
		number1 = number1 / 2 + i;
	}
	number2 = count;

	//�������
	while (number2 >= 4)
	{
		int i = 0;
		count += number2 / 4;
		i = number2 % 4;
		number2 = number2 / 4 + i;

	}

	printf("%d %d %d", count, number1, number2);

	return 0;
}