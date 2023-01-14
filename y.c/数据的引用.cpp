#include<iostream>

using namespace std;

////数据的引用
void paixu(int& x, int& y)
{
	int c = 0;
	c = x;
	x = y;
	y = c;
}

int main()
{
	int a = 10;
	int b = 18;
	paixu(a, b);
	cout << a << "  " << b << endl;
	return 0;
}
