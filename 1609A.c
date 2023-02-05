#include<stdio.h>
#include<math.h>
int main(){
    int t,n,a;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int x=0;
        long long int max=0;
        long long int sum=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            while(a%2==0){
                x++;
                a=a/2;
            }
            sum=sum+a;
            if(max<a){
                max=a;
            }
        }
        sum=sum-max+(max*pow(2,x));
        printf("%lld\n",sum);
    }
    return 0;
}