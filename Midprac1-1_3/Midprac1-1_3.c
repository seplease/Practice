#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, key, num, i, found, flag;
	found = 0;
	flag = 0;

	scanf("%d %d", &n, &key);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		if (num == key && flag == 0)
		{
			found = i;
			flag = 1;
		}
	}
	if (found == 0)
		printf("not found");
	else
		printf("%d", found);
}