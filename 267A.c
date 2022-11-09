#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int count=0;
        scanf("%d%d",&a,&b);
        while(b>0 && a>0){
            if(a>=b){
                count=count+a/b;
                a=a%b;
            }
            else{
                count=count+b/a;
                b=b%a;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}