#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	scanf_s("%d", &a);
	if (a % 2 == 0) {
		printf("%d", a);
		printf("�O����\n");
	}
	if (a % 2 == 1) {
		printf("%d",a);
		printf("�O�_��\n");
	}
	return 0;
}