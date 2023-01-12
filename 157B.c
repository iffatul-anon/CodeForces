#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int r[n];
    for(int i=0;i<n;i++){
        scanf("%d",&r[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(r[i]>r[j]){
                int tem=r[i];
                r[i]=r[j];
                r[j]=tem;
            }
        }
    }
    long double sum=0;
    for(int i=n-1;i>0;i=i-2){
        sum=sum+((r[i]*r[i])-(r[i-1]*r[i-1]));
    }
    if(n%2!=0){
        sum=sum+(r[0]*r[0]);
    }
    printf("%.10Lf\n",sum*3.1415926536);
    return 0;
}