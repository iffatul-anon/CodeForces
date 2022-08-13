#include<stdio.h>
int main(){
    int t,ab,cd;
    scanf("%d",&t);
    int a[4];
    for(int i=0;i<t;i++){
        for(int i=0;i<4;i++){
            scanf("%d",&a[i]);
        }
        if(a[0]>a[1]){
            ab=a[0];
        }
        else{
            ab=a[1];
        }
        if(a[2]>a[3]){
            cd=a[2];
        }
        else{
            cd=a[3];
        }
        for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
                if(a[i]>a[j]){
                    int tem=a[i];
                    a[i]=a[j];
                    a[j]=tem;
                }
            }
        }
        if(ab>a[0] && ab>a[1] && cd>a[0] && cd>a[1]){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}