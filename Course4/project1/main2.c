#include<stdio.h>
#include<math.h>
int main(void)
{
	double eps, m;
	double i = 0;
	double S = 0;
	scanf("%lf", &eps);
	for (m = 1; 1 / m > eps; m += 3)
	{
		if (m == 1)
		{
			S = S + 1;
		}
		else
		{
			i = m * pow(-1, m - 1);
			S = S + 1 / i;
		}
	}
    i = m * pow(-1, m - 1);
	S = S + 1 / i;
	printf("sum = %.6lf", S);
	return 0;
}