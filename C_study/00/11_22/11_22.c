#include<stdio.h>


struct Book
{
	char name[50];//����
	char author[50];//����
	int price;//�۸�
	int number;//����

};

int main()
{
	struct Book b1 = { "����ʦ�ּ�","����",1,30 };
	struct Book* p1 = &b1;

	/*b1.name = "����ʦ�ּ�";
	b1.author = "����";*/

	printf("������%s  ", b1.name);
	printf("���ߣ�%s  ", b1.author);
	printf("������%d  ", b1.number);
	printf("��Ǯ��%d  \n", b1.price);

	p1->number = 100;
	p1->price = 28;

	printf("������%s  ", p1->name);
	printf("���ߣ�%s  ", p1->author);
	printf("������%d  ", p1->number);
	printf("��Ǯ��%d\n", p1->price);

	//printf("%d\n", sizeof(char*));
	return 0;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	return 0;
}