#include<stdio.h>
int main(){
    int t,l1,l2,l3;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&l1,&l2,&l3);
        if(l1+l2==l3 || l1+l3==l2 || l2+l3==l1 || (l1==l2 && l3%2==0) || (l1==l3 && l2%2==0) || (l2==l3 && l1%2==0)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}