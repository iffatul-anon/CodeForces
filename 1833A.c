#include <stdio.h>
#include<string.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        int count=0;
        char s2[49][3]={"aa","ab","ac","ad","ae","af","ag","ba","bb","bc","bd","be","bf","bg","ca","cb","cc","cd","ce","cf","cg","da","db","dc","dd","de","df","dg","ea","eb","ec","ed","ee","ef","eg","fa","fb","fc","fd","fe","ff","fg","ga","gb","gc","gd","ge","gf","gg",};
        for(int i=0;i<49;i++){
            if(strstr(s,s2[i])){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}