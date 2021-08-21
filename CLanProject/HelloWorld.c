#include<stdio.h>
#include<math.h>

int main()
{
	printf("Hello World!\n");
	//======================海伦公式计算三角形面积
	//float a, b, c, p, area;
	//printf("请输入三角形的三条边长：");
	//scanf_s("%f,%f,%f", &a, &b, &c);
	//p = 0.5 * (a + b + c);
	//area = sqrt(p * (p - a) * (p - b) * (p - c));
	//printf("a=%f,b=%f,c=%f\n", a, b, c);
	//printf("三角形面积为：%f\n", area);

	//=====================计算一元二次方程解ax²+bx+c=0   delta=b²-4ac >= 0
	float a, b, c;
	printf("请输入常数a，b，c\n");
	scanf_s("%f,%f,%f", &a, &b, &c);

	float dalta = b * b - (4 * a * c);
	float q, p;
	q = -b / (2 * a);
	p = sqrt(dalta) / (2 * a);
	float x1 = q - p, x2 = q + p;
	printf("a=%f,b=%f,c=%f\n第一个解x1=%f,\n第二个解x2=%f\n", a, b, c, x1, x2);

	return 0;
}