#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float x;
    scanf("%f",&x);
    for(float a=1;a<=10;a++){
        for(float h=1;h<=10;h++){
            if(fabs(x-(((a/2)*h)/sqrt(pow((a/2),2)+pow(h,2))))<=0.000001){
                printf("%.0f %.0f\n",a,h);
                return 0;
            }
        }
    }
}