#include <stdio.h>

int area;

struct rectangle {
	int length;
	int height;
	int area;
} r1 ;

int main()
{
	printf("Rectangle Area Calculator\n=========================\n");
	printf("Enter the length: ");
	scanf("%d", &r1.length);
	printf("Enter the height: ");
	scanf("%d", &r1.height);
	r1.area = r1.length * r1.height;
	printf("The area of the rectangle is %d.\n", r1.area);
	return 0;
}
