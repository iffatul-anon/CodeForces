#include<stdio.h>
#include<string.h>
int main(){
    int n,s=0,d=0;
    scanf("%d",&n);
    int m=n;
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=1;
    anon:
    if(n==0){
        goto anon2;
    }
        if(a[0]>a[n-1]){
            if(count%2!=0){
                s=s+a[0];
            }
            else{
                d=d+a[0];
            }
            for(int x=0;x<n-1;x++){
                a[x]=a[x+1];
            }
            n--;
            count++;
            goto anon;
        }
        else if(a[0]<a[n-1]){
            if(count%2!=0){
                s=s+a[n-1];
            }
            else{
                d=d+a[n-1];
            }
            n--;
            count++;
            goto anon;
        }
    anon2:
    if(m%2==0){
        d=d+a[0];
    }
    else{
        s=s+a[0];
    }
    printf("%d %d\n",s,d);

}