#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float a, b, c, d, e,TOTAL;
	printf("�@��Ѫ��`���{�ơG");
	scanf_s("%f", &a);
	printf("\n�T�o�@���ɻ���G");
	scanf_s("%f", &b);
	printf("\n�@���ɯ��p�Z���G");
	scanf_s("%f", &c);
	printf("\n�@�Ѱ����O�G");
	scanf_s("%f", &d);
	printf("\n�@�ѳq��O(�L���O)�G");
	scanf_s("%f", &e);

	TOTAL = ((a / c) * b )+ d + e;

	printf("\n�@����`��O�G%0.1f",TOTAL);
	
	return 0;
}