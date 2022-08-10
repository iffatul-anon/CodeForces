#include<stdio.h>
#include<string.h>
int main(){
    char s1[200001];
    char s2[200001];
    scanf("%s",&s1);
    scanf("%s",&s2);
    int l;
    l=strlen(s1);
    int n=l/2;
    long long int s11=0,s12=0,s21=0,s22=0;
    for(int i=0;i<n;i++){
        s11=s11+s1[i];
        s12=s12+s1[i+n];
        s21=s21+s2[i];
        s22=s22+s2[i+n];
    }
    if((s11==s21 && s12==s22) || (s11==s22 && s12==s21)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}