#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int t,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        int a1=a,b1=b;
        char sa[100],sb[100];
        int x=0,y=0;
        while(a>0){
            if(a%2==0){
                sa[x++]='0';
            }
            else{
                sa[x++]='1';
            }
            a=a/2;
        }
        while(b>0){
            if(b%2==0){
                sb[y++]='0';
            }
            else{
                sb[y++]='1';
            }
            b=b/2;
        }
        int z;
        if(x>y){
            z=y;
        }
        else{
            z=x;
        }
        char s[z+1];
        for(int j=0;j<z;j++){
            if(sa[j]=='1' && sb[j]=='1'){
                s[j]='1';
            }
            else{
                s[j]='0';
            }
        }
        int anon=0;
        for(int j=0;j<z;j++){
            if(s[j]=='1'){
                anon=anon+pow(2,j);
            }
        }
        printf("%d\n",(a1^anon)+(b1^anon));
    }
    return 0;
}