#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	printf("number\tsquare\tcube\n");
	for (int i = 0; i <= 10; i++) {
		int a, b;
		a = pow(i, 2);
		b = pow(i, 3);
		printf("%d\t%d\t%d\t\n",i,a,b);
	}

	return 0;
}