#include<stdio.h>
#include<string.h>
int main(){
    char s1[10];
    char s2[10];
    char s3[10];
    scanf("%s",&s1);
    scanf("%s",&s2);
    scanf("%s",&s3);
    if(s1[0]=='r' && s2[0]=='s' && s3[0]=='s'){
        printf("F\n");
    }
    else if(s1[0]=='s' && s2[0]=='r' && s3[0]=='s'){
        printf("M\n");
    }
    else if(s1[0]=='s' && s2[0]=='s' && s3[0]=='r'){
        printf("S\n");
    }
    else if(s1[0]=='p' && s2[0]=='r' && s3[0]=='r'){
        printf("F\n");
    }
    else if(s1[0]=='r' && s2[0]=='p' && s3[0]=='r'){
        printf("M\n");
    }
    else if(s1[0]=='r' && s2[0]=='r' && s3[0]=='p'){
        printf("S\n");
    }
    else if(s1[0]=='s' && s2[0]=='p' && s3[0]=='p'){
        printf("F\n");
    }
    else if(s1[0]=='p' && s2[0]=='s' && s3[0]=='p'){
        printf("M\n");
    }
    else if(s1[0]=='p' && s2[0]=='p' && s3[0]=='s'){
        printf("S\n");
    }
    else{
        printf("?\n");
    }
    return 0;
}