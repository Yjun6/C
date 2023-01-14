#include<stdio.h>

struct Add {
	char name[20];
	char sex[20];
	int age;
};

int main()
{
	struct Add s1 = { "½¯ÐÇÒã","ÄÐ",19 };
	struct Add s2 = { "×ÞÓê½à","Å®",19 };
	printf("%s %s %d\n", s1.name, s1.sex, s1.age);
	struct Add* p = &s2;
	printf("%s %s %d", p->name, p->sex, p->age);
	return 0;
}



//#include<stdio.h>
//int main()
//{
//	long long a = 0;
//	scanf("%lld", &a);
//	long long n = 0, m = 0, z = 0;
//	n = a / 3600;//h
//	m = a / 60 - a / 3600 * 60;//min
//	z = a % 60;//s
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int n;
//	char arr[1000] = { 0 };
//	scanf("%d", &n);
//	int i = 0, j = 0;
//	scanf("%s", &arr);
//	if (n>=2) {
//		if (n % 2 == 0) {
//			for (i = 0, j = n - 1;i <= n / 2 && j >= n / 2;i++, j--) {
//				if (arr[i] != arr[j]) {
//					printf("No");
//					i--;
//					break;
//				}
//			}
//			if (i == j) {
//				printf("Yes");
//			}
//		}
//		else {
//			for (i = 0, j = n - 1;i <= n / 2 && j >= n / 2;i++, j--) {
//				if (arr[i] != arr[j]) {
//					printf("No");
//					i--;
//					break;
//				}
//			}
//			if (i == n / 2 ) {
//				printf("Yes");
//			}
//		}
//	}else{
//		printf("Yes");
//	}
//	return 0;
//}