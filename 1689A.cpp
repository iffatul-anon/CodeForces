#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        char a[n+1],b[m+1],c[n+m+1];
        scanf("%s %s",a,b);
        sort(a,a+n);
        sort(b,b+m);
        int i=0,j=0,x=0,y=0;
        int flag=0;
        while(1){
            if(i==n || j==m){
                break;
            }
            if(flag==0){
                for(y=0;y<k;y++){
                    if(a[i]<=b[j]){
                        c[x++]=a[i];
                        i++;
                    }
                    else{
                        break;
                    }
                    if(i==n){
                        break;
                    }
                }
                if(y<k || a[i]>b[j]){
                    flag=1;
                }
                else{
                    c[x++]=b[j];
                    j++;
                }
            }
            else{
                for(y=0;y<k;y++){
                    if(a[i]>=b[j]){
                        c[x++]=b[j];
                        j++;
                    }
                    else{
                        break;
                    }
                    if(j==m){
                        break;
                    }
                }
                if(y<k || a[i]<b[j]){
                    flag=0;
                }
                else{
                    c[x++]=a[i];
                    i++;
                }
            }
        }
        c[x]=0;
        printf("%s\n",c);
    }
    return 0;
}