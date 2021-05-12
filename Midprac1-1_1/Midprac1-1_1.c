#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, sum;

	sum = 0;

	scanf("%d", &num);

	for (i = 1; i <= num; i++)
		if (num % i == 0)
			sum += i;
	printf("%d", sum);
}