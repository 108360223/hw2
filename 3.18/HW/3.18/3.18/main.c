#include <stdio.h>
#include <stdlib.h>
float x, y;
int main(void)
{
	while (x != -1)
	{
		printf("Enter sales in dollars(-1 to end ):");
		scanf_s("%f", &x);
		if (x == -1) break;
		y = x * 0.09 + 200;
		printf("salary is");
		printf("%.2lf\n", y);
	}
	system("pause");
	return 0;
}