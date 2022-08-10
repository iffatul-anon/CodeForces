#include<stdio.h>
#include<string.h>
int main (){
    int t,n,l;
    char a[11];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n<10){
            printf("%d\n",n);
        }
        else{
        int count=9;
        int j=10;
        anon:
        for(j=j;j<=n;j++){
            //sprintf(a, "%d", j);
            itoa(j,a,10);
            l=strlen(a);
            for(int m=1;m<l;m++){
                if(a[0]!=a[m]){
                    j++;
                    goto anon;
                }    
            }
            count++;
        }
        printf("%d\n",count);
        }
    }
    return 0;
}