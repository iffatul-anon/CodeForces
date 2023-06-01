#include<iostream>
#include<algorithm>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[200001];
        scanf("%s",&s);
        int l=strlen(s);
        int a[10];
        a[0]=-1;
        a[1]=-1;
        a[2]=-1;
        a[3]=-1;
        a[4]=-1;
        a[5]=-1;
        a[6]=-1;
        a[7]=-1;
        a[8]=-1;
        a[9]=-1;
        for(int i=0;i<l;i++){
            a[s[i]-48]=i;
        }
        char f;
        int min=-1;
        for(int i=0;i<l;i++){
            if(min<i){
                for(int j=0;j<10;j++){
                    if(min<a[j]){
                        min=a[j];
                        f=j+48;
                        break;
                    }
                }
            }
            if(s[i]==f){
                continue;
            }
            if(s[i]!='9'){
                s[i]=s[i]+1;
            }
        }
        std::sort(s,s+l);
        printf("%s\n",s);
    }
    return 0;
}