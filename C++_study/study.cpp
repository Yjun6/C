#include"ʵ���.h"

//����Circle(Բ��)��
double Circle::area()const 
{
	return 3.14159 * radius * radius;
}


//����Square�������Σ���
double Square::area()const
{
	return side * side;
}


//����Rectangle(����)��
double Rectangle::area()const
{
	return width * height;
}

//����Trapezoid(����)��
double Trapezoid::area()const
{
	return 0.5 * (top + bottom) * height;
}

//����Triangle(������)��
double Triangle::area()const
{
	return 0.5 * width * height;
}