#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	char c = 'A';
	scanf("%d", &n);

	for (int i = 1;i <= n;i++)
	{
		for (int j = 1; j <= n - i;j++) printf("  ");
		for (int j = 1; j <= 2 * i - 1;j++)
		{
			printf("%c ", c);
			c++;
		}
		printf("\n");
		c = 'A';
	}
}