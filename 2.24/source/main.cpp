#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	scanf_s("%d", &a);
	if (a % 2 == 0) {
		printf("%d", a);
		printf("是偶數\n");
	}
	if (a % 2 == 1) {
		printf("%d",a);
		printf("是奇數\n");
	}
	return 0;
}