#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct stu
{
	char name[20];
	int age;
	char sex[10];
};

int main()
{
	struct stu s1;
	fscanf(stdin, "%s %d %s", s1.name, &(s1.age), s1.sex);
	fprintf(stdout, "%s %d %s\n", s1.name, s1.age, s1.sex);
	printf("==========\n");

	struct stu s2 = { "zhangyangqian", 23, "woman" };
	char tmp[50] = { 0 };
	sprintf(tmp, "%s %d %s", s2.name, s2.age, s2.sex);
	printf("%s\n", tmp);
	printf("==========\n");

	struct stu s3 = { 0 };
	sscanf(tmp, "%s %d %s", s3.name, &(s3.age), s3.sex);
	printf("%s %d %s\n", s3.name, s3.age, s3.sex);
	
	return 0;
}