#include<stdio.h>
#include<math.h>
#include<string.h>


//int main()
//{
//
//	return 0;
//}



//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 1;
//	int sum1 = 0;
//	for (int i = 1;i <= n;i++) {
//		sum *= i;
//		sum1 += sum;
//	}
//	printf("%d", sum1);
//	return 0;
//}


//int main() {
//	int n = 10;
//	scanf("%d", &n);
//	char arr[10];
//	int len = 0;
//	int arr1[10] = { 0 };
//	for (int i = 0;i < n;i++) {
//		scanf("%s", arr);
//		scanf("%d", &arr1[i]);
//		len = strlen(arr);
//		if (len == arr1[i]) {
//			printf("YES\n");
//		}
//		else {
//			printf("NO\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	printf("我不知道此时此刻的你，有没有想我\n");
//	printf("但我知道，我深深地思念着你\n");
//	printf("因为生病，所以我变得敏感\n");
//	printf("但也让我看清，我真的非常喜欢你，无法自拔\n");
//	return 0;
//}

//int main()
//{
//	char a;
//	a=getchar();
//	putchar(a);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int c = (a < b ? a : b);
//	for (c;c >= 1;c--) {
//		if ((a % c == 0) && b % c == 0) {
//			printf("%d", c);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int year = 1000;
//	//year%400==0||year%4==0&&year%100!=0
//	for (year = 1000;year <= 2000;year++) {
//		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//			printf("%d ", year);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 101;
//	int jade = 1;
//	while (i < 200) {
//		for (int j = 2;j <= pow(i, 0.5);j++) {
//			if (i % j == 0) {
//				jade = 0;
//				break;
//			}
//		}
//
//		if (jade == 1) {
//			printf("%d ", i);
//		}
//		jade = 1;
//		i += 2;
//	}
//	return 0;
//}

//int main()
//{
//	printf("%lf", pow(4,2));
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	int z = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b) {
//		z = a;
//		a = b;
//		b = z;
//	}
//	if (a < c) {
//		z = a;
//		a = c;
//		c = z;
//	}
//	if (b < c) {
//		z = b;
//		b = c;
//		c = z;
//	}
//	printf("%d %d %d ", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 3;i <= 100;i += 3) {
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 100;
//	switch (a) {//a必须是整型，float、double不可以 
//	case 100:
//		printf("%d", 19);
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	if (2)
//		printf("%d", 2);
//
//	return 0;
//}