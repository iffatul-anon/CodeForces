#include<stdio.h>
int main(){
    int t,n,H,i,j,k,tem,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&H);
        int a[n];
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++){
            for(k=j+1;k<n;k++){
                if(a[j]<a[k]){
                    tem=a[j];
                    a[j]=a[k];
                    a[k]=tem;
                }
            }
        }
        sum=a[0]+a[1];
        if(a[0]>=H){
            printf("1\n");
        }
        else{
            if(H%sum==0){
                printf("%d\n",(H/sum)+(H/sum));
            }
            else if(H%sum>a[0]){
                printf("%d\n",((H/sum)+(H/sum))+2);
            }
            else{
                printf("%d\n",((H/sum)+(H/sum))+1);
            }
        }
    }
}