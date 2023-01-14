#include<stdio.h>
#include<string.h>

int main()
{
	

	return 0;
}

//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//
//    int jade = 0;
//    int a = 0;
//    i = 0;
//    while (jade == 0 && i < n - 1)
//    {
//        if (arr[i] > arr[i + 1])
//        {
//            jade = 1;
//        }
//        else if (arr[i] < arr[i + 1])
//        {
//            jade = 2;
//        }
//        else
//        {
//            jade = 0;
//        }
//
//        i++;
//    }
//
//    if (i == n - 1)
//    {
//        jade = 3;
//    }
//
//    for (; i < n - 1; i++)
//    {
//
//        if (arr[i] > arr[i + 1])
//        {
//            a = 1;
//        }
//        else if (arr[i] <= arr[i + 1])
//        {
//            a = 2;
//        }
//
//        if (jade != a)
//        {
//            jade = 0;
//            break;
//        }
//    }
//
//    if (jade == 0)
//    {
//        printf("unsorted");
//    }
//    else
//    {
//        printf("sorted");
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int n = 0, m = 0;
//    scanf("%d %d", &n, &m);
//    int len = n + m;
//    int arr1[n], arr2[m];
//    int arr3[len];
//
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//
//    int a = 0, b = 0;
//    for (i = 0; i < len; i++)
//    {
//        if (a < n && b < m)
//        {
//            if (arr1[a] < arr2[b])
//            {
//                arr3[i] = arr1[a];
//                a++;
//            }
//            else
//            {
//                arr3[i] = arr2[b];
//                b++;
//            }
//        }
//        else if (a < n && b >= m)
//        {
//            arr3[i] = arr1[a];
//            a++;
//        }
//        else
//        {
//            arr3[i] = arr2[b];
//            b++;
//        }
//
//    }
//
//    for (i = 0; i < len; i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//
//    return 0;
//}

//#define Len 10
//
////排序函数
//void sort(int arr[])
//{
//	int i = 0;
//	int j = 0;
//	int z = 0;
//	int tmp = 0;
//	for (i = 0;i < Len-1;i++)//最后一个元素不需要排
//	{
//		//奇数全部都位于偶数前面
//		if (arr[i] % 2 != 0)
//		{
//			if (i == 0)
//			{
//				z++;
//				continue;
//			}
//
//			tmp = arr[i];
//			//所有的偶数往后排一
//			j = i;
//			while (j > z)
//			{
//				arr[j] = arr[j - 1];
//				j--;
//			}
//
//			arr[z] = tmp;
//			z++;
//		}
//
//	}
//}
//
//int main()
//{
//	int arr[Len] = { 0 };
//	int i = 0;
//	for (i = 0;i < Len;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	sort(arr);//排序函数
//
//	for (i = 0;i < Len;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//void add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 2;
//	add(a, b);
//
//
//	return 0;
//}