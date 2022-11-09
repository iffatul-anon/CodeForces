#include<stdio.h>
#include<string.h>
int main(){
	int t,c;
	char s[4];
	char r[4]="yes";
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%s",&s);
		strlwr(s);
		c=strcmp(s,r);
		if(c==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}	
	}
	return 0;
}