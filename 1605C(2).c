#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", &s);
        int min = 10000000;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'a')
            {
                min = 2;
                break;
            }
            if (s[i] == 'a' && s[i + 2] == 'a')
            {
                if (min > 3)
                {
                    min = 3;
                }
            }
            if (s[i] == 'a' && ((s[i + 1] == 'b' && s[i + 2] == 'c') || (s[i + 1] == 'c' && s[i + 2] == 'b')) && s[i + 3] == 'a')
            {
                if (min > 4)
                {
                    min = 4;
                }
            }
            if (s[i] == 'a' && s[i + 3] == 'a' && ((s[i + 1] == 'b' && s[i + 2] == 'b' && s[i + 4] == 'c' && s[i + 5] == 'c') || (s[i + 1] == 'c' && s[i + 2] == 'c' && s[i + 4] == 'b' && s[i + 5] == 'b')) && s[i + 6] == 'a')
            {
                if (min > 7)
                {
                    min = 7;
                }
            }
        }
        if (min == 10000000)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", min);
        }
    }
    return 0;
}