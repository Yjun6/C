//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1;i <= 9;i++) {
//		for (j = 1;j <= i;j++) {
//			printf("%d * %d = %d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0;i < 10;i++) {
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1;i < 10;i++) {
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 10,20,30,40,50,60,70,80,90,100 };
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	int right = 9;
//	int left = 0;
//	while (left<=right) {
//		int mid = (left + right) / 2;
//		if (a < arr[mid]) {
//			right = mid - 1;
//		}
//		else if (a > arr[mid]) {
//			left = mid + 1;
//		}
//		else {
//			printf("%d", mid);
//			b = 1;
//			break;
//		}
//	}
//	if (b != 1) {
//		printf("找不到");
//	}
//	return 0;
//}

//int  main()
//{
//	int i = 1;
//	int j = 0;
//	int num = 0;
//	for (i = 1;i <= 100;i++) {
//		//i%10==9 i/10->i i%10==9 ...->i>=0
//		j = i;
//		while (j >0) {
//			if (j % 10 == 9) {
//				num++;
//			}
//			j /= 10;
//		}
//	}
//	printf("%d", num);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	double sum = 0;
//	for (i = 1;i <= 100;i++) {
//		if (i % 2 == 0) {
//			sum -= 1.0 / i;
//		}
//		else {
//			sum += 1.0 / i;
//		}
//	}
//	printf("%lf", sum);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	//n/12 
//	printf("%lld", (n / 12 * 4) + 2);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int sum = (1 + i) * i / 2;
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//enum Stu {
//	a,
//	b=3,
//	c
//};
//int main()
//{
//	int arr[c] = { 1,2,3,0 };
//	printf("%d %d %d", a, b, c);
//	for (int i = 0;i < c;i++) {
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int m = 0;
	int t = 0;
	int s = 0;
	int num = 0;
	scanf("%d %d %d", &m, &t, &s);
	//s/t==a,%==0;a+1 
	if (t != 0) {
		if (s % t == 0) {
			num = m - s / t;
		}
		else {
			num = m - s / t - 1;
		}
	}
	printf("%d", num);
	return 0;
}

//#include<stdio.h>
//
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	printf("%lld", n / 12 * 4 + 2);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	double x = 0.0;
//	scanf("%d", &x);
//	if (x >= 90 && x <= 100) {
//		printf("A");
//	}
//	else if(x >= 80) {
//		printf("B");
//	}
//	else if(x >= 70) {
//		printf("C");
//	}
//	else if(x >= 60) {
//		printf("D");
//	}
//	else if(x > 0 && x < 60) {
//		printf("E");
//	}
//	else {
//	   printf("Score is error!");
//	}
//
//	return 0;
//}
