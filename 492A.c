#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int p=0;
    int i=1;
    int count=0;
    anon2:
        for(int j=1;j<=i;j++){
            p=p+j;
        }
        i++;
        count++;
            if(p==n){   
                goto anon;
            }
            else if(p>n){
                count--;
                goto anon;
            }
            goto anon2;
    anon:

    printf("%d\n",count);
    
    return 0;
}