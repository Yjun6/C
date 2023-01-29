#include"ÊµÑé°Ë.h"

int main()
{
	Circle circle(12.6);
	Square square(3.5);
	Rectangle rectangle(4.5, 8.4);
	Trapezoid trapezoid(2.0, 4.5, 3.2);
	Triangle triangle(4.5, 8.4);
	Shape* pt[5] = { &circle,&square,&rectangle ,&trapezoid ,&triangle };

	double areas = 0.0;
	for (int i = 0;i < 5;i++)
	{
		areas = areas + pt[i]->area();
	}

	cout << "total of all areas=" << areas << endl;

	return 0;
}

