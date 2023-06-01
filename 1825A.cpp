#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[100];
        scanf("%s",s);
        int l=strlen(s);
        printf("%d\n",count(s,s+l,s[0])==l?-1:l-1);
    }
    return 0;
}