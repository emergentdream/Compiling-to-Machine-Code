#include <stdio.h>

int add(int a, int b);
int a,b,sum;
int main(void)
{
	printf("Enter first integer: ");
	scanf("%d", &a);
	printf("Enter second integer: ");
	scanf("%d", &b);
	sum = add(a,b);
	printf("The sum is %d\n", sum);
}

int add(int a, int b)
{
	return a + b;
}
