#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,i1,j1,i2,j2;
        char d[3];
        scanf("%d %d %d %d %d %d %s",&n,&m,&i1,&j1,&i2,&j2,&d);
        int count=0,flag=0;
        int x=i1,y=j1;
        if(i1==i2 && j1==j2){
            printf("0\n");
        }
        else{
        if(x==1 && y==1 && strcmp(d,"DR")!=0){
            count++;
            strcpy(d,"DR");
        }
        else if(x==n && y==1 && strcmp(d,"UR")!=0){
            count++;
            strcpy(d,"UR");
        }
        else if(x==1 && y==m && strcmp(d,"DL")!=0){
            count++;
            strcpy(d,"DL");
        }
        else if(x==n && y==m && strcmp(d,"UL")!=0){
            count++;
            strcpy(d,"UL");
        }
        else if(x==1 && strcmp(d,"UL")==0){
            count++;
            strcpy(d,"DL");
        }
        else if(x==1 && strcmp(d,"UR")==0){
            count++;
            strcpy(d,"DR");
        }
        else if(x==n && strcmp(d,"DL")==0){
            count++;
            strcpy(d,"UL");
        }
        else if(x==n && strcmp(d,"DR")==0){
            count++;
            strcpy(d,"UR");
        }
        else if(y==1 && strcmp(d,"UL")==0){
            count++;
            strcpy(d,"UR");
        }
        else if(y==1 && strcmp(d,"DL")==0){
            count++;
            strcpy(d,"DR");
        }
        else if(y==m && strcmp(d,"UR")==0){
            count++;
            strcpy(d,"UL");
        }
        else if(y==m && strcmp(d,"DR")==0){
            count++;
            strcpy(d,"DL");
        }
        while(1){
            if(x==i2 && y==j2){
                break;
            }
            if(strcmp(d,"DR")==0){
                int a=n-x;
                int b=m-y;
                int min;
                if(a<b){
                    min=a;
                    x=x+a;
                    y=y+a;
                }
                else{
                    min=b; 
                    x=x+b;
                    y=y+b;
                }
                if(x-i2==y-j2 && x-i2<=min){
                    break;
                }
                if(x==n && y==m){
                    count++;
                    strcpy(d,"UL");
                }
                else if(x==n){
                    count++;
                    strcpy(d,"UR");
                }
                else if(y==m){
                    count++;
                    strcpy(d,"DL");
                }
                if(x-i1==y-j1){
                    flag++;
                }
            }
            else if(strcmp(d,"DL")==0){
                int a=n-x;
                int b=y-1;
                int min;
                if(a<b){
                    min=a;
                    x=x+a;
                    y=y-a;
                }
                else{
                    min=b; 
                    x=x+b;
                    y=y-b;
                }
                if(x-i2==j2-y && x-i2<=min){
                    break;
                }
                if(x==n && y==1){
                    count++;
                    strcpy(d,"UR");
                }
                else if(x==n){
                    count++;
                    strcpy(d,"UL");
                }
                else if(y==1){
                    count++;
                    strcpy(d,"DR");
                }
                if(x-i1==j1-y){
                    flag++;
                }
            }
            else if(strcmp(d,"UR")==0){
                int a=x-1;
                int b=m-y;
                int min;
                if(a<b){
                    min=a;
                    x=x-a;
                    y=y+a;
                }
                else{
                    min=b; 
                    x=x-b;
                    y=y+b;
                }
                if(i2-x==y-j2 && i2-x<=min){
                    break;
                }
                if(x==1 && y==m){
                    count++;
                    strcpy(d,"DL");
                }
                else if(x==1){
                    count++;
                    strcpy(d,"DR");
                }
                else if(y==m){
                    count++;
                    strcpy(d,"UL");
                }
                if(i1-x==y-j1){
                    flag++;
                }
            }
            else if(strcmp(d,"UL")==0){
                int a=x-1;
                int b=y-1;
                int min;
                if(a<b){
                    min=a;
                    x=x-a;
                    y=y-a;
                }
                else{
                    min=b; 
                    x=x-b;
                    y=y-b;
                }
                if(i2-x==j2-y && i2-x<=min){
                    break;
                }
                if(x==1 && y==1){
                    count++;
                    strcpy(d,"DR");
                }
                else if(x==1){
                    count++;
                    strcpy(d,"DL");
                }
                else if(y==1){
                    count++;
                    strcpy(d,"UR");
                }
                if(i1-x==j1-y){
                    flag++;
                }
            }
            if(flag==5){
                break;
            }
        }
        if(flag==5){
            printf("-1\n");
        }
        else{
            printf("%d\n",count);
        }
        }
    }
    return 0;
}