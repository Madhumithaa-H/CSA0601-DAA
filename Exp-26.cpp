#include <stdio.h>
int main()
{
    int n = 4; 
    for (int i = 1; i <= n; i++)
	{
        for (int space = 0; space < n - i; space++)
		{
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
		{
            printf("%d", j);
            if (j < i) {
                printf("   "); 
            }
        }
        printf("\n"); 
    }
    return 0;
}
