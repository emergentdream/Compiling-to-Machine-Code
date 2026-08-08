#include <stdio.h>

int main()
{
	int x = 0;
	int y = 1;
	int z;
	int bound;
	printf("Enter upper limit of fibonacci sequence: ");
	scanf("%d", &bound);
	while (x < bound)
	{
		printf("%d ", x);
		z = x + y;
		x = y;
		y = z;
	}
	printf("\n");
	return 0;
}
