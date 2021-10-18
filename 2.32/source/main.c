#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int main(void) {
	float a, b,BMI;
	printf("請輸入身高(公分)：");
	scanf_s("%f", &a );
	printf("\n請輸入體重(公斤)：");
	scanf_s("%f", &b);
	a = a / 100;
	BMI = b/pow(a, 2);
	printf("\n你的BMI：%4.2f\n", BMI);

	if (BMI < 18.5) printf("\n體重過輕");
	if (BMI >= 18.5 && BMI < 25) printf("\n體重正常");
	if (BMI >= 25 && BMI < 30) printf("\n體重過重");
	if (BMI >= 30 ) printf("\n體重超重");
	return 0;
}