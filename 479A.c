#include<stdio.h>
int main(){
    int a,b,c,a1,a2,a3,a4,a5,a6;
    scanf("%d %d %d",&a,&b,&c);

    a1=a+b*c;
    a2=a*(b+c);
    a3=a*b*c;
    a4=(a+b)*c;
    a5=a*b+c;
    a6=a+b+c;
    if(a1>=a2 && a1>=a3 && a1>=a4 && a1>=a5 && a1>=a6){
        printf("%d\n",a1);
    }
    else if(a2>=a1 && a2>=a3 && a2>=a4 && a2>=a5 && a2>=a6){
        printf("%d\n",a2);
    }
    else if(a3>=a1 && a3>=a2 && a3>=a4 && a3>=a5 && a3>=a6){
        printf("%d\n",a3);
    }
    else if(a4>=a1 && a4>=a2 && a4>=a3 && a4>=a5 && a4>=a6){
        printf("%d\n",a4);
    }
    else if(a5>=a1 && a5>=a2 && a5>=a3 && a5>=a4 && a5>=a6){
        printf("%d\n",a5);
    }
    else if(a6>=a1 && a6>=a2 && a6>=a3 && a6>=a4 && a6>=a5){
        printf("%d\n",a6);
    }
    
    return 0;
}