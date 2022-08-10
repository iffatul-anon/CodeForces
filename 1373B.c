#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    char s[101];
    for(int d=0;d<t;d++){
    scanf("%s",&s);
    int l=strlen(s);
    int count=0;
    int flag=0;
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(s[i]!=s[j]){
                flag=1;
            }
        }
    }
    if(flag==0){
        printf("NET\n");
    }
    else{
    anon:
    if(l<2){
        if(count%2==0){
            printf("NET\n");
        }
        else{
            printf("DA\n");
        }
    }
    else{
            for(int i=0;i<l;i++){
                if(s[i]!=s[i+1]){
                    count++;
                    for(int k=i;k<l-2;k=k+2){
                        s[k]=s[k+2];
                        s[k+1]=s[k+3];
                    }
                    l=l-2;
                    if(l>1){
                    int flag2=0;
                    for(int x=0;x<l;x++){
                        for(int y=x+1;y<l;y++){
                            if(s[x]!=s[y]){
                                flag2++;
                            }
                        }
                    }
                    if(flag2==0){
                        break;
                    }
                    }
                    goto anon;
                }
            }
            if(count%2==0){
                printf("NET\n");
            }
            else{
                printf("DA\n");
            }
    }
    }
    }
    return 0;
}