#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s1[1000];
        char s[1000];
        scanf("%s", &s1);
        int l = strlen(s1);
        for (int j = 0; j < l; j++)
        {
            s[j] = s1[j];
            s[j + l] = s1[l - j - 1];
        }
        for (int j = 0; j < l * 2; j++)
        {
            printf("%c", s[j]);
        }
        printf("\n");
    }
    return 0;
}