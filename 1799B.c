#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],flag1=0,flag2=0;
        scanf("%d",&a[0]);
        if(a[0]==1){
            flag1=1;
        }
        for(int i=1;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]==1){
                flag1=1;
            }
            if(a[i]!=a[i-1]){
                flag2=1;
            }
        }
        if(flag2==0){
            printf("0\n");
        }
        else if(flag1==1){
            printf("-1\n");
        }
        else{
            int x[300000],y[300000],z=0,flag;
            for(int i=0;i<n;i++){
                if(a[i]==2){
                    continue;
                }
                for(int j=0;j<n;j++){
                    flag=0;
                    if(a[i]>a[j]){
                        if(a[i]%a[j]==0){
                            a[i]=a[i]/a[j];
                        }
                        else{
                            a[i]=(a[i]/a[j])+1;
                        }
                        x[z]=i+1;
                        y[z]=j+1;
                        z++;
                        flag=1;
                    }
                    if(a[i]<a[j]){
                        if(a[j]%a[i]==0){
                            a[j]=a[j]/a[i];
                        }
                        else{
                            a[j]=(a[j]/a[i])+1;
                        }
                        x[z]=j+1;
                        y[z]=i+1;
                        z++;
                        flag=1;
                    }
                    if(flag==1){
                        j--;
                    }
                    if(a[i]==2){
                        break;
                    }
                }
            }
            printf("%d\n",z);
            for(int i=0;i<z;i++){
                printf("%d %d\n",x[i],y[i]);
            }
        }
    }
    return 0;
}