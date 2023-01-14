#include<stdio.h>

int my_strlen(char* arr)
{
	int len = 0;
	while (*arr != '\0')
	{
		len++;
		arr++;
	}
	return len;
}

void nixu(char* arr, int len,int i)
{
	char tmp;
	tmp = arr[i];
	arr[i] = arr[len - 1 - i];

	if (i < len / 2)
	{
		nixu(arr, len, i + 1);
	}
	arr[len - 1 - i] = tmp;
}



int main()
{
	char arr[] = "sagfhjasggjawjka";
	int len = my_strlen(arr);

	int i = 0;
	nixu(arr, len, i);
	
	printf("%s\n", arr);

	return 0;
}