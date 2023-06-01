#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int l,r;
        scanf("%d %d",&l,&r);
        int max=-1,anon;
        for(int i=l;i<=l+101;i++){
            if(i>r){
                break;
            }
            int x=i;
            int y=x%10,z=x%10;
            while(x>0){
                if(x%10>y){
                    y=x%10;
                }
                if(x%10<z){
                    z=x%10;
                }
                x=x/10;
            }
            if(y-z>max){
                max=y-z;
                anon=i;
            }
            if(max==9){
                break;
            }
        }
        printf("%d\n",anon);
    }
    return 0;
}