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
        int flag1=0,flag2 = 0,flag3=0,flag4=0,i;
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'm' || s[i]=='M')
            {
                flag1=1;
            }
            else{
                break;
            }
        }
        for (i = i; i < n; i++)
        {
            if (s[i] == 'e' || s[i]=='E')
            {
                flag2=1;
            }
            else{
                break;
            }
        }
        for (i = i; i < n; i++)
        {
            if (s[i] == 'o' || s[i]=='O')
            {
                flag3=1;
            }
            else{
                break;
            }
        }
        for (i =i; i < n; i++)
        {
            if (s[i] == 'w' || s[i]=='W')
            {
                flag4=1;
            }
            else{
                break;
            }
        }
        if(flag1==1 && flag2==1 && flag3==1 && flag4==1 && i==n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}