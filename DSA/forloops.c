#include <stdio.h>

int main(void)
{
	int A[5] = { 1 , 2 , 9 , 4 , 5 };
	for (int i = 0 ; i < 5 ; i ++)
	{
		printf("%p\n" , &A[i]);
	}
	return 0;
}
