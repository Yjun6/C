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
	struct s s1 = { "�����",19,210405,100 };
	struct s* p = &s1;

	printf("������%s\n", p->name);
	printf("ѧ�ţ�%d\n", p->id);
	printf("���䣺%d\n", p->age);
	printf("�ɼ���%d\n", s1.socre);

	return 0;
}