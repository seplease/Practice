#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, i, count;
	count = 0;

	scanf("%d", &num);

	for (i = 1; num != 0; i++)
	{
		num = num / 10;
		count++;
	}
	printf("%d", count);
}