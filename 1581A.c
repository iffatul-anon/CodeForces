#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
        int n;
		scanf("%d",&n);
        long long int f=1,i;
        for(i=2;i<=n;i++){
		    f=((i*2)-1)*f%1000000007*(i*2)%1000000007;
	    }
		printf("%lld\n",f);
	}
	return 0;
}