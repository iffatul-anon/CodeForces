#include<stdio.h>
int main(){
	int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long int max=0,sum=0;
        for(int i=0;i<n;i++){
            int a,b,c;
            scanf("%d %d",&a,&b);
            if(a>b){
                sum=sum+(2*b);
                c=a;
            }
            else{
                sum=sum+(2*a);
                c=b;
            }
            if(max<c){
                max=c;
            }
        }
        printf("%lld\n",sum+(2*max));
    }
}