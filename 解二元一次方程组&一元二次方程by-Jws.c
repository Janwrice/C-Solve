#include<stdio.h>
#include<math.h>
int k = 1;
int main()
{
	printf("注：程序并不完善，Bug较多！\n");
	while (k > 0)
	{
		printf("输入“1”计算二元一次方程组\n输入“2”计算一元二次方程\n输入“0”退出程序\n");
		int choiceProgram;
		scanf("%d", &choiceProgram);
		if (choiceProgram == 1)
		{
			printf("示例：\n\n a11x+a12y=b1① \n a21x+a22y=b2②\n\n");
			int i = 1;
			while (i > 0)
			{
				double a11, a12, b1, a21, a22, b2, m, a221, x, y;
				printf("请输入方程中a11的值\n");
				scanf("%lf", &a11);
				printf("请输入方程中a12的值\n");
				scanf("%lf", &a12);
				printf("请输入方程中b1的值\n");
				scanf("%lf", &b1);
				printf("请输入方程中a21的值\n");
				scanf("%lf", &a21);
				printf("请输入方程中a22的值\n");
				scanf("%lf", &a22);
				printf("请输入方程中b2的值\n");
				scanf("%lf", &b2);
				m = a21 / a11;
				a221 = a22 - (m * a12);
				double b21 = b2 - (m * b1);
				y = b21 / a221;
				x = (b1 - (a12 * y)) / a11;
				printf("x=%lf\n", x);
				printf("y=%lf\n", y);
				printf("参考：BS版数学初二上册《你知道计算机是如何解方程组的吗》\n");
				printf("--Jws--\n");
				break;
			}
		}
		if (choiceProgram == 2)
		{
			printf("示例:\n\n ax^2 + bx + c = 0\n\n");
			int i = 1;
			while (i > 0)
			{
				double a, b, c, b2;
				printf("请输入方程中a的值\n");
				scanf("%lf", &a);
				printf("请输入方程中b的值\n");
				scanf("%lf", &b);
				printf("请输入方程中c的值\n");
				scanf("%lf", &c);
				b2 = pow(b, 2);
				if ((b2 - (4 * a * c)) < 0)
				{
					printf("此方程无解\n");
				}
				if ((b2 - (4 * a * c)) == 0)
				{
					double x = (-b) / (2 * a);
					printf("x=%lf\n", x);
				}
				if ((b2 - (4 * a * c)) > 0)
				{
					double x1 = (-b + (sqrt(b2 - (4 * a * c)))) / (2 * a);
					double x2 = (-b - (sqrt(b2 - (4 * a * c)))) / (2 * a);
					printf("x1=%lf\n", x1);
					printf("x2=%lf\n", x2);
				}
				printf("通过求根公式解一元二次方程\n");
				printf("--Jws--\n");
				break;
			}
		}
		if (choiceProgram == 0)
		{
			break;
		}
		else
		{
			k++;
		}
	}
}
