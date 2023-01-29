#include<stdio.h>

int main()
{
	long long a, b, c;
	long long z = 0, gys = 0;
	scanf("%lld %lld %lld", &a, &b, &c);
	//a<=b<=c
	if (a > b) 
	{
	z = a;
	a = b;
	b = z;
	}
	if (a > c) 
	{
		z = a;
		a = c;
		c = z;
	}
	if (b > c) 
	{
		z = b;
		b = c;
		c = z;
	}
	//求最大公约数
	for (z=a;z>=1;z--) 
	{
		if (a % z == 0 && c % z == 0) 
		{
			gys = z;
			break;
		}
	}
	a /= gys;
	c /= gys;
	printf("%lld/%lld", a, c);
	return 0;
}

//int main()
//{
//	int week = 0;
//	long n = 0;
//	long long distance = 0;
//	scanf("%d %ld", &week, &n);
//	for (int i = 0;i < n;i++) 
//	{
//		if (week == 6) {
//			i++;
//			week++;   //week==7
//		}
//		if (week ==7) {
//			week = 1;
//			continue;
//		}
//		week++;
//		distance += 250;
//	}
//	printf("%lld", distance);
//	return 0;
//}

//int main()
//{
//	int dl = 0;
//	scanf("%d", &dl);
//	double money = 0.0;
//	if (dl <= 150)
//		money = 0.4463 * dl;
//	else if (dl <= 400)
//		money = 0.4463 * 150 + (dl - 150) * 0.4663;
//	else
//		money = 0.4463 * 150 + (400 - 150) * 0.4663 + (dl - 400) * 0.5663;
//	printf("%.1lf", money);
//	return 0;
// }

//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int z = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b) {
//		z = a;
//		a = b;
//		b = z;
//	}
//	if (a > c) {
//		z = a;
//		a = c;
//		c = z;
//	}
//	if (b > c) {
//		z = b;
//		b = c;
//		c = z;
//	}
//	if (a + b <= c) {
//		printf("Not triangle");
//	}
//	else {
//		if (a * a + b * b == c * c)
//			printf("Right triangle");
//		if (a * a + b * b > c * c)
//			printf("Acute triangle");
//		if (a * a + b * b < c * c)
//			printf("Obtuse triangle");
//		if ((a == b) || (b == c))
//			printf("\nIsosceles triangle");
//		if (a == b && b == c)
//			printf("\nEquilateral triangle");
//	}
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int arr[3][2] = { 0 };
//	int i = 0, j = 0;
//	int money = 0;
//	int money1 = 0;
//	scanf("%d", &n);
//	for (i = 0;i < 3;i++) {
//		for (j = 0;j < 2;j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//n%arr[i][0]==0->n/arr[i][0]*arr[i][1] 
//	//!==0-> (n/arr[i][0]+1)*arr[i][1]
//	if (n % arr[0][0] == 0) {
//		money = n / arr[0][0] * arr[0][1];
//	}
//	else {
//		money = (n / arr[0][0] + 1) * arr[0][1];
//	}
//	for (i = 1;i < 3;i++) {
//		if (n % arr[i][0] == 0) {
//			money1 = n / arr[i][0] * arr[i][1];
//		}
//		else {
//			money1 = (n / arr[i][0] + 1) * arr[i][1];
//		}
//		if (money > money1)
//			money = money1;
//	}
//	printf("%d", money);
//	return 0;
//}

//int main()
//{
//	int arr[7][2] = { 0 };
//	int i = 0;
//	int j = 0;
//	int max = 0;
//	int jade = 0;
//	for (i = 0;i < 7;i++) {
//		for (j = 0;j < 2;j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	max = arr[0][0] + arr[0][1];
//	jade = 1;
//	for (i = 1;i < 7;i++) {
//		if (max < arr[i][0] + arr[i][1]) {
//			max = arr[i][0] + arr[i][1];
//			jade = i + 1;
//		}
//	}
//	if (max <= 8)
//		jade = 0;
//	printf("%d", jade);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//#define E 3.141593
//int main()
//{
//	double a = 4.0 * E * 4 * 4 * 4 / 3;
//	double b = 4.0 * E * 10 * 10 * 10 / 3;
//	a = pow((a+b), 1.0 / 3);
//	printf("%.0lf", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int t = 0;
//	int s = 0;
//	int num = 0;
//	scanf("%d %d %d", &m, &t, &s);
//	//s/t==a,%==0;a+1 
//	if (t != 0 && m > s/t) {
//		if (s % t == 0) {
//			num = m - s / t;
//		}
//		else {
//			num = m - s / t - 1;
//		}
//	}
//	printf("%d", num);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int n = 0, m = 0;
//	int a = 0, b = 0, c = 0, d = 0;
//	if (x % 2 == 0) 
//		n = 1;
//	if (x > 4 && x <= 12) 
//		m = 1;
//	if (n == 1 && m == 1)
//		a = 1;
//	if (n == 1 || m == 1)
//		b = 1;
//	if ((n == 1 && m != 1) || (n != 1 && m == 1))
//		c = 1;
//	if (n != 1 && m != 1)
//		d = 1;
//	printf("%d %d %d %d", a, b, c, d);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int z = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		z = a;
//		a = b;
//		b = z;
//	}
//	if (a > c)
//	{
//		z = a;
//		a = c;
//		c = z;
//	}
//	if (b > c)
//	{
//		z = b;
//		b = c;
//		c = z;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	//5x>3x+11 -> 2x>11 -> x>5 ->>b
//	//
//	int n = 0;
//	scanf("%d", &n);
//	if (n > 5)
//		printf("Luogu");
//	else
//		printf("Local");
//	return 0;
//}

//int _2(int year)
//{
//	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//		return 29;
//	return 28;
//}
//int main()
//{
//	int year = 0;
//	int m = 0;
//	scanf("%d %d", &year, &m);
//	int day = 0;
//	switch (m) {
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			day = 31;
//			break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			day = 30;
//			break;
//		case 2:
//			day = _2(year);
//			break;
//		default:
//			break;
//
//	}
//	printf("%d", day);
//	return 0;
//}
