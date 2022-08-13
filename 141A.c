#include<stdio.h>
#include<string.h>
int main(){
    char s1[101],s2[101],s3[101];
    gets(s1);
    gets(s2);
    gets(s3);
    int l1=strlen(s1);
    int l2=strlen(s2);
    int l3=strlen(s3);
    if(l3!=l1+l2){
        printf("NO\n");
    }
    else{
        anon:
        for(int x=0;x<l3;x++){
            for(int y=0;y<l1;y++){
                if(s3[x]==s1[y]){
                    for(int i=x;i<l3-1;i++){
                        s3[i]=s3[i+1];
                    }
                    x--;
                    l3--;
                    for(int j=y;j<l1-1;j++){
                        s1[j]=s1[j+1];
                    }
                    y--;
                    l1--;
                    goto anon;
                }
            }
            for(int z=0;z<l2;z++){
                if(s3[x]==s2[z]){
                    for(int i=x;i<l3-1;i++){
                        s3[i]=s3[i+1];
                    }
                    x--;
                    l3--;
                    for(int j=z;j<l2-1;j++){
                        s2[j]=s2[j+1];
                    }
                    z--;
                    l2--;
                    goto anon;
                }
            }
        }
        if(l3==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}