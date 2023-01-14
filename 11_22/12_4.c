//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n][n];//变长数组 C99 不能初始化
//    int i = 0, j = 0;
//    int jade = 1;
//
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    for (i = 1; i < n; i++)
//    {
//        for (j = 0; j < i; j++)
//        {
//            if (arr[i][j] != 0)
//            {
//                jade = 0;
//                break;
//
//            }
//        }
//        if (jade == 0)
//        {
//            break;
//        }
//    }
//
//    if (jade == 1)
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        printf("NO\n");
//    }
//
//    return 0;
//}


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
// 给20元，
//可以多少汽水
//#include<stdio.h>
//
//int main()
//{
//	int money = 0;
//	printf("当前拥有的钱：");
//	scanf("%d", &money);
//	//换空瓶前，钱全部花光可得的汽水数量
//	int count = 0;
//	count = money;
//	int num = 0;
//	num = money;
//
//	//计算所有空瓶可换的汽水数目
//	while (num)
//	{
//		count += num / 2;
//		if(num==1)
//		{
//			break;
//		}
//		else if ((num % 2) == 0)
//		{
//			num /= 2;
//		}
//		else
//		{
//			num /= 2;
//			num++;
//		}
//	}
//
//	printf("可以换的的汽水数目是:%d\n", count);
//
//	return 0;
//}

#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    int arr1[n][m];
    int arr2[n][m];
    int i = 0, j = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    int jade = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                jade = 0;
                break;
            }
        }

        if (jade == 0)
        {
            break;
        }

    }

    if (jade == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}


