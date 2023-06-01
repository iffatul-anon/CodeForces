#include <stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", &s);
        int flag = 0, i;
        for (i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - 1 - i])
            {
                break;
            }
        }
        for (i = i; i < n / 2; i++)
        {
            if (s[i] == s[n - 1 - i])
            {
                break;
            }
        }
        for (i = i; i < n / 2; i++)
        {
            if (s[i] != s[n - 1 - i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
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