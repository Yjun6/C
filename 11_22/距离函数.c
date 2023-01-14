#include<stdio.h>
#include<math.h>

struct s
{
	double x;
	double y;
};

int main()
{
	struct s s1, s2, s3;
	double s = 0.0;
	scanf("%lf %lf", &s1.x, &s1.y);
	scanf("%lf %lf", &s2.x, &s2.y);
	scanf("%lf %lf", &s3.x, &s3.y);

	double x1, x2, x3, y1, y2, y3;
	x1 = pow((s1.x - s2.x), 2);
	y1 = pow((s1.y - s2.y), 2);
	s += pow((x1 + y1), 0.5);

	x2 = pow((s1.x - s3.x), 2);
	y2 = pow((s1.y - s3.y), 2);
	s += pow((x2 + y2), 0.5);

	x3 = pow((s3.x - s2.x), 2);
	y3 = pow((s3.y - s2.y), 2);
	s += pow((x3 + y3), 0.5);
	
	printf("%.2lf", s);
	return 0;
}