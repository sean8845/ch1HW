#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	if (b % a == 0) {
		printf("%d是%d的倍數", a, b);
	}
	else {
		printf("%d不是%d的倍數", a, b);
	}


	return 0;
}