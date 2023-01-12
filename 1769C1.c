#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[105];
        for(int j=0;j<105;j++){
            a[j]=0;
        }
        int x;
        for(int j=0;j<n;j++){
            scanf("%d",&x);
            a[x]++;
        }
        for(int j=103;j>=0;j--){
            if(a[j]>0 && a[j+1]==0){
                a[j]--;
                a[j+1]=-1;
            }
        }
        int count=0,max=0;
        for(int j=0;j<105;j++){
            if(a[j]==0){
                if(a[j+1]==-1){
                    for(int k=j+1;k<105;k++){
                        if(a[k]==-1){
                            count++;
                        }
                        else{
                            if(max<count){
                                max=count;
                            }
                            count=0;
                            break;
                        }
                    }
                }
                else{
                    count=0;
                }
            }
            else{
                count++;
            }
            if(max<count){
                max=count;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}