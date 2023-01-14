#pragma once

#include<iostream>

using namespace std;

//�������Shape
class Shape
{
public:
	virtual double area()const = 0;

};

//Circle(Բ��)��
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

//Square�������Σ���
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

//Rectangle(����)��
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

//Trapezoid(����)��
class Trapezoid :public Shape
{
public:
	//���캯��
	Trapezoid(double t, double b, double h) :top(t), bottom(t), height(h) { }
	//�����麯��
	virtual double area()const;
	/*{
		return 0.5 * (top + bottom) * height;
	}*/

protected:
	double top, bottom, height;
};

//Triangle(������)��
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
