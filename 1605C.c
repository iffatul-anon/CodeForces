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
        if (strstr(s,"aa"))
        {
            printf("2\n");
        }
        else if(strstr(s,"aba"))
        {
            printf("3\n");
        }
        else if(strstr(s,"aca"))
        {
            printf("3\n");
        }
        else if(strstr(s,"abca"))
        {
            printf("4\n");
        }
        else if(strstr(s,"acba"))
        {
            printf("4\n");
        }
        else if(strstr(s,"abbacca"))
        {
            printf("7\n");
        }
        else if(strstr(s,"accabba"))
        {
            printf("7\n");
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}