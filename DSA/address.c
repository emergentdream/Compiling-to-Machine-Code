#include <stdio.h>

int main(void)
{
	int a = 10;
	int *ptr = &a;
	printf("the address of variable a is %p\n", ptr);
	printf("the value given by the pointer is %i\n", *ptr);
}
