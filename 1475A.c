#include <stdio.h>
int main()
{
    int t, i;
    long long int n, j;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%lld", &n);
        if (n % 2 != 0)
        {
            printf("YES\n");
        }
        else
        {
            j = 2;
            while (j < n)
            {
                j = j * 2;
            }
            if (j == n)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
    }
    return 0;
}