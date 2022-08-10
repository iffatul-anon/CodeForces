#include<stdio.h>
int main(){
    int a,b;
    int count=0;
    int s[1000000];
    int i=0;
    scanf("%d %d",&a,&b);
    anon:
    if(a>b){
        printf("NO\n");
    }
    else if(b%10==3 || b%10==5 || b%10==7 || b%10==9){
        printf("NO\n");
    }
    else{
    if(b%2!=0){
        s[i]=b;
        b=b/10;
        count++;
        i++;
        if(a==b){
            printf("YES\n");
            printf("%d\n",count+1);
            printf("%d ",a);
            for(int j=count-1;j>=0;j--){
                printf("%d ",s[j]);
            }
            goto anon2;
        }
        else{
            goto anon;
        }
    }
    else{
        s[i]=b;
        b=b/2;
        count++;
        i++;
        if(a==b){
            printf("YES\n");
            printf("%d\n",count+1);
            printf("%d ",a);
            for(int j=count-1;j>=0;j--){
                printf("%d ",s[j]);
            }
            goto anon2;
        }
        else{
            goto anon;
        }
    }
    }
    anon2:
    
    return 0;
}