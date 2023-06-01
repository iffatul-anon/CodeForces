#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int x;
        scanf("%lld",&x);
        long long int a=x,b=0;
        long long int x1=x;
        int c=0;
        char s[50];
        while(x1>0){
            s[c++]=(x1%2)+48;
            x1=x1/2;
        }
        c--;
        while(c!=-1){
            if(s[c]=='0'){
                a=a+pow(2,c);
                b=b+pow(2,c);
            }
            if(a+b==x*2){
                break;
            }
            if(a+b>x*2){
                a=a-pow(2,c);
                b=b-pow(2,c);
            }
            c--;
        }
        if(c==-1){
            printf("-1\n");
        }
        else{
            printf("%lld %lld\n",a,b);
        }
    }
    return 0;
}