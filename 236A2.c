#include<stdio.h>
#include<string.h>

int main(){
    int i,j,k;
    char s[101];
    gets(s);
    int l=strlen(s);
    int a[l];
    for(int i=0;i<l;i++){
        a[i]=(int)s[i];
    }
    for(i=0;i<l;i++){
        for(j=i+1;j<l;j++){
            if(a[i]==a[j]){
                for(k=j;k<l-1;k++){
                    a[k]=a[k+1];
                }
                l--;
                j--;
            }
        }
        
    }
    if(l%2==0){
        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }

    return 0;
}