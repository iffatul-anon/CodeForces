#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int i=0;
        int j=n-1;
        int p;
        if(n%2==0){
            p=n/2;
        }
        else{
            p=(n+1)/2;
        }
        int q=p;
        int count1=0,count2=0;
        while(i<n || j>=0){
            for(i=i;i<n;i++){
                if(a[i]==p){
                    count1++;
                    break;
                }
            }
            for(j=j;j>=0;j--){
                if(a[j]==q){
                    count2++;
                    break;
                }
            }
            p++;
            q--;
        }
        if(count1+count2==n+1){
            printf("0\n");
        }
        else if(n%2==0){
            int bal;
            if(count1<count2+1){
                bal=count1;
            }
            else{
                bal=count2+1;
            }
            int anon=n-bal-bal+2;
            printf("%d\n",anon/2);
        }
        else{
            int bal;
            if(count1<count2){
                bal=count1;
            }
            else{
                bal=count2;
            }
            int anon=n-bal-bal+1;
            printf("%d\n",anon/2);
        }
    }
    return 0;
}