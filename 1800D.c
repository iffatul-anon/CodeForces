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
        int count = n - 1;
        for (int i = 0; i < n - 2; i++)
        {
            if (s[i] == s[i + 2])
            {
                count--;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}