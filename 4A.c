#include<stdio.h>
int main (){
int w,e;
scanf("%d",&w);
if(w>2){
e=w%2;
if(e==0){
    printf("YES\n");
}
else{
    printf("NO\n");
}
}
else{
    printf("NO\n");
}

    return 0;
}