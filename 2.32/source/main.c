#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int main(void) {
	float a, b,BMI;
	printf("�п�J����(����)�G");
	scanf_s("%f", &a );
	printf("\n�п�J�魫(����)�G");
	scanf_s("%f", &b);
	a = a / 100;
	BMI = b/pow(a, 2);
	printf("\n�A��BMI�G%4.2f\n", BMI);

	if (BMI < 18.5) printf("\n�魫�L��");
	if (BMI >= 18.5 && BMI < 25) printf("\n�魫���`");
	if (BMI >= 25 && BMI < 30) printf("\n�魫�L��");
	if (BMI >= 30 ) printf("\n�魫�W��");
	return 0;
}