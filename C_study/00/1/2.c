//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF) {//EOF ´ú±íscanf()ÊäÈëÊ§°Ü
//
//        if (a >= 140)
//            printf("Genius");
//    }
//
//    return 0;
//}

//#include<stdio.h>
//
//int main() {
//	float i;
//	i = (int)3.5 % (int)2; //(float)(2 + 3) / 2;
//	printf("%f", i);
//	return 0;
//}
//   =<  

//#include<stdio.h>
//
//int main() {
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &i, &j);
//	i = i > j ? i : j;
//	printf("%d", i);
//	return 0;
//}

//#include<stdio.h>
//
//int main() {
//	int a, b;
//	while (scanf("%d %d", &a, &b)!=EOF) {
//		if (a > b)
//			printf("%d>%d\n", a, b);
//		else if (a == b)
//			printf("%d=%d\n", a, b);
//		else
//			printf("%d<%d\n", a, b);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (scanf("%d", &i) != EOF) {
//		if (i % 2 == 0)
//			printf("Even\n");
//		else
//			printf("Odd\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	short i = 0;
//	while (scanf("%d", &i) != EOF) {
//		if (i >= 60)
//			printf("Pass\n");
//		else
//			printf("Fail\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	short i = 0;
//	while (scanf("%d", &i) != EOF) {
//		if (i >= 90 && i <= 100)
//			printtf("Perfect\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int d = 0;
//	d = a * 0.2 + b * 0.3 + c * 0.5;
//	printf("%d", d);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	int n, m;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	if (b < d) {
//		n = c - a;
//		m = d - b;
//	}
//	else {
//		n = c - a - 1;
//		m = 60 - b + d;
//	}
//	printf("%d %d", n, m);
//	return 0;
//}
//#include<stdio.h>
//#define E 3.14159
//int main()
//{
//	int l = 20 * 1000;
//	int r = 0, h = 0;
//	scanf("%d %d", &h, &r);
//	int a = r * r * h * E;
//	int num = 0;
//	if (a*(l/a)==l) {
//		num = l / a;
//	}
//	else {
//		num = l / a + 1;
//	}
//	printf("%d", num);
//	return 0;
//}

//#include<stdio.h>
//#define ADD(x,y,z) (x+y+z)//ºê
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int sum = 0;
//	sum = ADD(a, b, c);
//	printf("%d", sum);
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	double arr[5][5] = { 0 };
//	double arr1[5] = { 0 };
//	int i, j;
//	for (i = 0;i < 5;i++) {
//		for (j = 0;j < 5;j++) {
//			scanf("%lf", &arr[i][j]);
//		}
//	}
//	for (i = 0;i < 5;i++) {
//		for (j = 0;j < 5;j++) {
//			arr1[i] += arr[i][j];
//		}
//	}
//	for (i = 0;i < 5;i++) {
//		for (j = 0;j < 5;j++) {
//			printf("%.1lf ", arr[i][j]);
//		}
//		printf("%.1lf\n", arr1[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &i) != EOF) {
//		for (j = 0;j < i;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	long long a = 0;
//	scanf("%lld", &a);
//	long long  b, c, d ;
//	b = a / (60 * 60);//h
//	c = (a -(a / (60 * 60))*60*60) / 60;//min
//	d = a - (a - (a / (60 * 60)) * 60 * 60) / 60*60 - (a / (60 * 60))*60*60;//s
//	printf("%lld %lld %lld", b, c, d);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double i = 0;
//	while (scanf("%lf", &i) != EOF) {
//		if (i > 0)
//			printf("%d\n", 1);
//		else if (i == 0)
//			printf("%.1lf\n", 0.5);
//		else
//			printf("%d\n", 0);
//	}
//	return 0;
//}

#include<stdio.h>

int main()
{

	return 0;
}







