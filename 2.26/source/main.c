#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	if (b % a == 0) {
		printf("%d�O%d������", a, b);
	}
	else {
		printf("%d���O%d������", a, b);
	}


	return 0;
}