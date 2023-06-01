#include <stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int a[n], flag = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int n1 = a[i];
                int n2 = a[j];
                while (n1 != n2)
                {
                    if (n1 > n2)
                    {
                        if (n1 % n2 == 0)
                        {
                            n1 = n2;
                        }
                        else
                        {
                            n1 = n1 % n2;
                        }
                    }
                    else
                    {
                        if (n2 % n1 == 0)
                        {
                            n2 = n1;
                        }
                        else
                        {
                            n2 = n2 % n1;
                        }
                    }
                }
                if (n1 < 3)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}