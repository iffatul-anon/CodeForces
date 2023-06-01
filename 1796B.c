#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char a[100],b[100];
        scanf("%s",&a);
        scanf("%s",&b);
        int l1=strlen(a);
        int l2=strlen(b);
        if(a[0]==b[0]){
            printf("YES\n");
            printf("%c*\n",a[0]);
        }
        else if(a[l1-1]==b[l2-1]){
            printf("YES\n");
            printf("*%c\n",a[l1-1]);
        }
        else{
            int flag=0;
            for(int i=0;i<l1;i++){
                for(int j=0;j<l2;j++){
                    if((a[i]==b[j]) && (a[i+1]==b[j+1])){
                        printf("YES\n");
                        printf("*%c%c*\n",a[i],a[i+1]);
                        flag=1;
                        break;
                    }
                }
                if(flag==1){
                    break;
                }
            }
            if(flag==0){
                printf("NO\n");
            }
        }
    }
    return 0;
}