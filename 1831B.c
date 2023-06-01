#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n+1],b[n+1];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
        }
        a[n]=-1;
        b[n]=-1;
        int aa[400001]={0};
        int count=1,max=0;
        for(int i=0;i<n;i++){
            if(a[i]==a[i+1]){
                count++;
            }
            else{
                if(aa[a[i]]<count){
                    aa[a[i]]=count;
                    if(max<aa[a[i]]){
                        max=aa[a[i]];
                    }
                }
                count=1;
            }
        }
        for(int i=0;i<n;i++){
            if(b[i]==b[i+1]){
                count++;
            }
            else{
                if(max<(aa[b[i]]+count)){
                    max=aa[b[i]]+count;
                }
                count=1;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}