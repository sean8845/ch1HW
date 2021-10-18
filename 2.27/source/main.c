#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    for (int i = 1; i <= 5; i = i + 1)
    {
        for (int j = 1; j <= 5 - i; j = j + 1)
        {
            printf( " ");
        }
        for (int j = 1; j <= 2 * i - 1; j = j + 1)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}