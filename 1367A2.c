#include<stdio.h>
#include<string.h>
int main()
{
    int n,d;
    scanf("%d",&n);
    char s[101];
    int i,j;
    for(i=0;i<n;i++)
    {
     scanf("%s",&s);
     
    
     d= strlen(s);
 
     printf("%c",s[0]);
    
 
    for(j=1;j<d-1;j=j+2)
    {
       
     printf("%c",s[j]);
     
    
    }
    
    printf("%c\n",s[d-1]);
    
    
     
    }
 
}