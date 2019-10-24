#include <stdio.h>
#include <stdlib.h>
int account;
float balance, charge, credit, limit;
int main(void)
{
	while (account != -1)
	{
		printf("Enter account number (-1 to end):");
		scanf_s("%d", &account);
		if (account == -1) break;
		printf("Enter beginning balance:");
		scanf_s("%f", &balance);
		printf("Enter total charges:");
		scanf_s("%f", &charge);
		printf("Enter total credits:");
		scanf_s("%f", &credit);
		printf("Enter credit limit:");
		scanf_s("%f", &limit);
		balance += charge - credit;
		if (balance > limit)
		{
			printf("account:%d	\n", account);
			printf("Credit Limit:\t%.2lf \n", limit);
			printf("blance:\t%.2lf	\n", balance);
			printf("Credit Limit Exceeded");
		}
	}
	system("pause");
	return 0;
	
}