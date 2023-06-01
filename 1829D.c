#include <stdio.h>
int anon(int x,int y){
    if(x==y){
        return 1;
    }
    else if(x%3!=0 || x<y){
        return 0;
    }
    else{
        return anon((x/3)*2,y) || anon(x/3,y);
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        if(anon(n,m)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}