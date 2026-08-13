#include <stdio.h>

int main(void)
{
	int number;
	int bit;
	int j;
	// Prompt user for number
	printf("Enter a number from 0 to 255 and i will output it's corresponding binary: ");
	scanf("%d", &number);
	printf("In binary it is: ");
	// Use loop and bitwise rightshift operator to print bits starting from leftmost bit
	for (int j = 7; j >= 0; j--)
	{
		bit = number >> j & 1;
		printf("%d", bit);
	}
	printf("\n");
	return 0;
}
