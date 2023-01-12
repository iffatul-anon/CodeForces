#include<stdio.h>
#include<string.h>
int main(){
    char a[1000],b[1000];
    scanf("%s %s",&a,&b);
    int l1=strlen(a);
    int l2=strlen(b);
    if(l1!=l2){
        printf("1\n");
    }
    else{
        int flag=0;
        for(int i=0;i<l1;i++){
            if(a[i]!=b[i]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("1\n");
        }
        else{
            printf("%s\n",a);
        }
    }
    return 0;
}