#include<stdio.h>
int main(){
    int t,n,flag;
    scanf("%d",&t);
    for(int l=0;l<t;l++){
        scanf("%d",&n);
        char a[n+1];
        int n2=n;
        for(int i=0;i<=n;i++){
            scanf("%c",&a[i]);
        }
        int count1,count2;
        flag=0;
        for(int i=0;i<=n;i++){
            count1=0;
            count2=0;
            for(int j=i+1;j<=n;j++){
                if(a[i]==a[j]){
                    count1++;
                    count2=j-i;
                    if(count1!=count2){
                        flag=1;
                        goto anon;
                    }
                } 
            }
        }
        printf("YES\n");
        anon:
        if(flag==1){
            printf("NO\n");
        }
    }
    return 0;
}