#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int m, n, i, total;

	total = 0;

	scanf("%d %d", &m, &n);

	for (; m <= n; m++)
	{
		for (i = 2; i <= m; i++)
			if (m % i == 0)
				break;
		if (m == i)
			total += m;
	}
	printf("%d", total);
}