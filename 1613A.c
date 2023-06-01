#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int a,b,c,d;
        scanf("%d %d",&a,&b);
        scanf("%d %d",&c,&d);
        int n1=a,n2=c,l1=0,l2=0;
        while(n1>0){
            l1++;
            n1=n1/10;
        }
        while(n2>0){
            l2++;
            n2=n2/10;
        }
        if(l1+b>l2+d){
            printf(">\n");
        }
        else if(l1+b<l2+d){
            printf("<\n");
        }
        else{
            if(l1<l2){
                for(int j=l1;j<l2;j++){
                    a=a*10;
                }
            }
            else if(l1>l2){
                for(int j=l2;j<l1;j++){
                    c=c*10;
                }
            }
            if(a>c){
                printf(">\n");
            }
            else if(a<c){
                printf("<\n");
            }
            else{
                printf("=\n");
            }
        }
    }
}