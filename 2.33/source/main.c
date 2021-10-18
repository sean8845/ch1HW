#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float a, b, c, d, e,TOTAL;
	printf("一整天的總里程數：");
	scanf_s("%f", &a);
	printf("\n汽油一公升價格：");
	scanf_s("%f", &b);
	printf("\n一公升能行駛距離：");
	scanf_s("%f", &c);
	printf("\n一天停車費：");
	scanf_s("%f", &d);
	printf("\n一天通行費(過路費)：");
	scanf_s("%f", &e);

	TOTAL = ((a / c) * b )+ d + e;

	printf("\n一整天總花費：%0.1f",TOTAL);
	
	return 0;
}