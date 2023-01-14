#include<stdio.h>


struct Book
{
	char name[50];//书名
	char author[50];//作者
	int price;//价格
	int number;//数量

};

int main()
{
	struct Book b1 = { "催眠师手记","高铭",1,30 };
	struct Book* p1 = &b1;

	/*b1.name = "催眠师手记";
	b1.author = "高铭";*/

	printf("书名：%s  ", b1.name);
	printf("作者：%s  ", b1.author);
	printf("数量：%d  ", b1.number);
	printf("价钱：%d  \n", b1.price);

	p1->number = 100;
	p1->price = 28;

	printf("书名：%s  ", p1->name);
	printf("作者：%s  ", p1->author);
	printf("数量：%d  ", p1->number);
	printf("价钱：%d\n", p1->price);

	//printf("%d\n", sizeof(char*));
	return 0;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	return 0;
}