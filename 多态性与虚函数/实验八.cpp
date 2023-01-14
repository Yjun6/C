#include"实验八.h"

//定义Circle(圆形)类
double Circle::area()const 
{
	return 3.14159 * radius * radius;
}


//定义Square（正方形）类
double Square::area()const
{
	return side * side;
}


//定义Rectangle(矩形)类
double Rectangle::area()const
{
	return width * height;
}

//定义Trapezoid(梯形)类
double Trapezoid::area()const
{
	return 0.5 * (top + bottom) * height;
}

//定义Triangle(三角形)类
double Triangle::area()const
{
	return 0.5 * width * height;
}