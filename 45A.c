#include<stdio.h>
#include<string.h>
int main(){
    int x,k;
    char s[20];
    scanf("%s",&s);
    scanf("%d",&k);
    if(s[0]=='J'){
        if(s[1]=='a'){
            x=1;
        }
        else if(s[2]=='n'){
            x=6;
        }
        else{
            x=7;
        }
    }
    else if(s[0]=='F'){
        x=2;
    }
    else if(s[0]=='M'){
        if(s[2]=='r'){
            x=3;
        }
        else{
            x=5;
        }
    }
    else if(s[0]=='A'){
        if(s[1]=='p'){
            x=4;
        }
        else{
            x=8;
        }
    }
    else if(s[0]=='S'){
        x=9;
    }
    else if(s[0]=='O'){
        x=10;
    }
    else if(s[0]=='N'){
        x=11;
    }
    else if(s[0]=='D'){
        x=12;
    }
    for(int i=1;i<=k;i++){
        if(x==12){
            x=0;
        }
        x++;
    }
    if(x==1){
        printf("January\n");
    }
    else if(x==2){
        printf("February\n");
    }
    else if(x==3){
        printf("March\n");
    }
    else if(x==4){
        printf("April\n");
    }
    else if(x==5){
        printf("May\n");
    }
    else if(x==6){
        printf("June\n");
    }
    else if(x==7){
        printf("July\n");
    }
    else if(x==8){
        printf("August\n");
    }
    else if(x==9){
        printf("September\n");
    }
    else if(x==10){
        printf("October\n");
    }
    else if(x==11){
        printf("November\n");
    }
    else if(x==12){
        printf("December\n");
    }
    return 0;
}