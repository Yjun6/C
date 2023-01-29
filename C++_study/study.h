#pragma once

#include<iostream>

using namespace std;

//抽象基类Shape
class Shape
{
public:
	virtual double area()const = 0;

};

//Circle(圆形)类
class Circle :public Shape
{
public:
	Circle(double r) :radius(r) { }
	virtual double area()const;
	/*{
		return 3.14159 * radius * radius;
	};*/

protected:
	double radius;
};

//Square（正方形）类
class Square :public Shape
{
public:
	Square(double s) :side(s) { }
	virtual double area()const;
	/*{
		return side * side;
	}*/

protected:
	double side;
};

//Rectangle(矩形)类
class Rectangle :public Shape
{
public:
	Rectangle(double w, double h) :width(w), height(h) { }
	virtual double area()const;
	/*{
		return width * height;
	}*/

protected:
	double width, height;
};

//Trapezoid(梯形)类
class Trapezoid :public Shape
{
public:
	//构造函数
	Trapezoid(double t, double b, double h) :top(t), bottom(t), height(h) { }
	//定义虚函数
	virtual double area()const;
	/*{
		return 0.5 * (top + bottom) * height;
	}*/

protected:
	double top, bottom, height;
};

//Triangle(三角形)类
class Triangle :public Shape
{
public:
	Triangle(double w, double h) :width(w), height(h) { }
	virtual double area()const;
	/*{
		return 0.5 * width * height;
	}*/

protected:
	double width, height;

};
