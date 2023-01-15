#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<string.h>

//结构体排序
struct stu
{
	char name[20];
	int age;
};

//按照age
int mp_age(void* e1, void* e2)
{
	return (*(struct stu*)e1).age - (*(struct stu*)e2).age;
}

int mp_name(void* e1, void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

void test()
{
	struct stu s[3] = { {"zhangsan",28},{"lisi",24},{"wangmazi",34} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), mp_age);
	//qsort(s, sz, sizeof(s[0]), mp_name);
}

int main()
{
	test();
	return 0;
}