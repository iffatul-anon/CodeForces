#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long long int x,y;
        scanf("%lld",&x);
        if(x==1){
            printf("3\n");
        }
        else{
            int anon[50],a=0;
            while(x>0){
                anon[a++]=x%2;
                x=x/2;
            }
            int count=0,j;
            for(j=0;j<a;j++){
                if(anon[j]==1){
                    break;
                }
            }
            long long int anon2=pow(2,j);
            for(j=0;j<a;j++){
                if(anon[j]==1){
                    count++;
                }
            }
            if(count==1){
                printf("%lld\n",anon2+1);
            }
            else{
                printf("%lld\n",anon2);
            }
        }
    }
    return 0;
}