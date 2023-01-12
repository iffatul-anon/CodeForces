#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a;
        int b[n];
        int c[n];
        int count=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            long long int anon=2;
            if(a==1 || a==2){
                continue;
            }
            else{
                while(a>anon){
                    anon=anon*2;
                }
                if(a==anon){
                    continue;
                }
                b[count]=j+1;
                c[count]=anon-a;
                count++;
            }
        }
        printf("%d\n",count);
        for(int j=0;j<count;j++){
            printf("%d %d\n",b[j],c[j]);
        }
    }
    return 0;
}