#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n1;
	int n2;

	printf("Enter two integers , and I'll tell you\n");
	printf("the relationship they satisfy¡G");

	scanf_s("%d %d", &n1, &n2);

	if (n1 == n2)
	{
		printf("%d is equal to %d\n",n1,n2);
	}
	if (n1 != n2)
	{
		printf("%d is not equal to %d\n", n1, n2);
	}
	if (n1 < n2)
	{
		printf("%d is less than %d\n", n1, n2);
	}
	if (n1 > n2)
	{
		printf("%d is greater than %d\n", n1, n2);
	}
	if (n1 <= n2)
	{
		printf("%d is less than or equal to %d\n", n1, n2);
	}
	if (n1 >= n2)
	{
		printf("%d is greater than or equal to %d\n", n1, n2);
	}

	system("pause");
	return 0;
}