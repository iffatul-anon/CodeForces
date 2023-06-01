#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        int flag = 0;
        scanf("%d", &a[0]);
        int gcd = a[0];
        for (int i = 1; i < n; i++)
        {
            scanf("%d", &a[i]);
            int n1 = gcd;
            int n2 = a[i];
            while (n1 != n2)
            {
                if (n1 % n2 == 0)
                {
                    n1 = n2;
                    break;
                }
                if (n2 % n1 == 0)
                {
                    break;
                }
                if (n1 > n2)
                {
                    n1 = n1 % n2;
                }
                else
                {
                    n2 = n2 % n1;
                }
            }
            gcd = n1;
        }
        if (gcd == 1)
        {
            printf("0\n");
        }
        else
        {
            int n1 = n;
            int n2 = a[n - 1];
            while (n1 != n2)
            {
                if (n1 % n2 == 0)
                {
                    n1 = n2;
                    break;
                }
                if (n2 % n1 == 0)
                {
                    break;
                }
                if (n1 > n2)
                {
                    n1 = n1 % n2;
                }
                else
                {
                    n2 = n2 % n1;
                }
            }
            n2 = gcd;
            while (n1 != n2)
            {
                if (n1 % n2 == 0)
                {
                    n1 = n2;
                    break;
                }
                if (n2 % n1 == 0)
                {
                    break;
                }
                if (n1 > n2)
                {
                    n1 = n1 % n2;
                }
                else
                {
                    n2 = n2 % n1;
                }
            }
            if (n1 == 1)
            {
                printf("1\n");
            }
            else
            {
                int n1 = n - 1;
                int n2 = a[n - 2];
                while (n1 != n2)
                {
                    if (n1 % n2 == 0)
                    {
                        n1 = n2;
                        break;
                    }
                    if (n2 % n1 == 0)
                    {
                        break;
                    }
                    if (n1 > n2)
                    {
                        n1 = n1 % n2;
                    }
                    else
                    {
                        n2 = n2 % n1;
                    }
                }
                n2 = gcd;
                while (n1 != n2)
                {
                    if (n1 % n2 == 0)
                    {
                        n1 = n2;
                        break;
                    }
                    if (n2 % n1 == 0)
                    {
                        break;
                    }
                    if (n1 > n2)
                    {
                        n1 = n1 % n2;
                    }
                    else
                    {
                        n2 = n2 % n1;
                    }
                }
                if (n1 == 1)
                {
                    printf("2\n");
                }
                else
                {
                    printf("3\n");
                }
            }
        }
    }
    return 0;
}