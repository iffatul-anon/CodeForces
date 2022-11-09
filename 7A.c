#include<stdio.h>
#include<string.h>
int main(){
    char s1[9],s2[9],s3[9],s4[9],s5[9],s6[9],s7[9],s8[9];
    scanf("%s",&s1);
    scanf("%s",&s2);
    scanf("%s",&s3);
    scanf("%s",&s4);
    scanf("%s",&s5);
    scanf("%s",&s6);
    scanf("%s",&s7);
    scanf("%s",&s8);
    int count=0,count2=0,count3=0;
    count=0;
    for(int i=0;i<8;i++){
        if(s1[i]=='B'){
            count++;
        }
    }
    if(count==8){
        count2++;
    }
    else{
        count3=count;
    }
    count=0;
    for(int i=0;i<8;i++){
        if(s2[i]=='B'){
            count++;
        }
    }
    if(count==8){
        count2++;
    }
    else{
        count3=count;
    }
    count=0;
    for(int i=0;i<8;i++){
        if(s3[i]=='B'){
            count++;
        }
    }
    if(count==8){
        count2++;
    }
    else{
        count3=count;
    }
    count=0;
    for(int i=0;i<8;i++){
        if(s4[i]=='B'){
            count++;
        }
    }
    if(count==8){
        count2++;
    }
    else{
        count3=count;
    }
    count=0;
    for(int i=0;i<8;i++){
        if(s5[i]=='B'){
            count++;
        }
    }
    if(count==8){
        count2++;
    }
    else{
        count3=count;
    }
    count=0;
    for(int i=0;i<8;i++){
        if(s6[i]=='B'){
            count++;
        }
    }
    if(count==8){
        count2++;
    }
    else{
        count3=count;
    }
    count=0;
    for(int i=0;i<8;i++){
        if(s7[i]=='B'){
            count++;
        }
    }
    if(count==8){
        count2++;
    }
    else{
        count3=count;
    }
    count=0;
    for(int i=0;i<8;i++){
        if(s8[i]=='B'){
            count++;
        }
    }
    if(count==8){
        count2++;
    }
    else{
        count3=count;
    }

    if(count3==0){
        printf("%d\n",count2);
    }
    else{
        printf("%d\n",count3+count2);
    }
    return 0;
}