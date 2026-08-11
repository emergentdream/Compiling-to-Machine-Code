#include <stdio.h>

int checkvoid(char x);
int add(int a, int b);
int a,b,sum;
char symbol;

int main(void)
{
	printf("Enter first integer: ");
	scanf("%d", &a);
	printf("Enter second integer: ");
	scanf("%d", &b);
	sum = add(a,b);
	printf("The sum is %d\n", sum);
	symbol = 's';
	checkvoid(symbol);
}

int add(int a, int b)
{
	return a + b;
}

int checkvoid(char x)
{
	printf("the symbol is %c\n", symbol);
	return 0;
}
