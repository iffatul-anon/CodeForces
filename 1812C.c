#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int a[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8, 4, 6, 2, 6, 4, 3, 3, 8, 3, 2, 7, 9, 5, 0, 2, 8, 8, 4, 1, 9, 7 };
    for(int i=0;i<t;i++){
        int anon=1;
        for(int j=0;j<a[i];j++){
            int n;
            scanf("%d",&n);
            anon=anon*n;
        }
        printf("%d\n",anon);
    }
    return 0;
}