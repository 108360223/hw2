#include <stdio.h>
#include <stdlib.h>
int x, y, z, w;
int main()
{
	printf("Enter length:");
	scanf_s("%d",&x);
	printf("Enter breadth:");
	scanf_s("%d",&y);
	for (z = 0; z < y; z++)
	{
		if (z == 0 || z == y-1)
		{
			for (w = 0; w < x; w++)
			{
				printf("+");
			}
			printf("\n");
		}
		else
		{
			for (w = 0; w < x; w++)
			{
				if (w == 0 || w == x-1)printf("+");
				else printf(" ");
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}
