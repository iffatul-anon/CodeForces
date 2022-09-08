#include<stdio.h>
int main(){
    int s,n;
    scanf("%d %d",&s,&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int tem1=a[i];
                a[i]=a[j];
                a[j]=tem1;
                int tem2=b[i];
                b[i]=b[j];
                b[j]=tem2;
            }
        }
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(s>a[i]){
            s=s+b[i];
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}