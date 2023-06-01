#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            b[i]=a[i];
        }
        sort(b,b+n);
        int i=0,j=n-1;
        int x=0,y=n-1;
        while(i<=j){
            int flag1=0,flag2=0;
            if(a[i]==b[x]){
                i++;
                x++;
                flag1=1;
            }
            if(a[i]==b[y]){
                i++;
                y--;
                flag1=1;
            }
            if(a[j]==b[x]){
                j--;
                x++;
                flag2=1;
            }
            if(a[j]==b[y]){
                j--;
                y--;
                flag2=1;
            }
            if(flag1==0 && flag2==0){
                break;
            }
        }
        if(i>j){
            printf("-1\n");
        }
        else{
            printf("%d %d\n",i+1,j+1);
        }
    }
    return 0;
}