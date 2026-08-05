#include <stdio.h>

float tempC;
float tempF;
float FtoC(float a);
float CtoF(float a);
int choice;

int main(void)
{
	printf("Temperature Conversion\n(1) Fahrenheit to Celcius\n(2) Celcius to Fahrenheit\nYour choice: ");
	scanf("%d", &choice);
	switch (choice) {
		case 1:
			printf("Enter temperature in fahrenheit: ");
			scanf("%f", &tempF);
			printf("In celcius it is %.1f\n", FtoC(tempF));
			break;
		case 2:
			printf("Enter temperature in celcius: ");
			scanf("%f", &tempC);
			printf("In celcius it is %.1f\n", CtoF(tempC));
			break;
	}
	return 0;
}

float FtoC(float a)
{
	return a-32*0.5555555;
}

float CtoF(float a)
{
	return a*1.8+32;
}
