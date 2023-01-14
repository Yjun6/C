#include<stdio.h>

struct s
{
	char name[10];
	int age;
	int id;
	int socre;

};

int main()
{
	struct s s1 = { "×ÞÓê½à",19,210405,100 };
	struct s* p = &s1;

	printf("ÐÕÃû£º%s\n", p->name);
	printf("Ñ§ºÅ£º%d\n", p->id);
	printf("ÄêÁä£º%d\n", p->age);
	printf("³É¼¨£º%d\n", s1.socre);

	return 0;
}