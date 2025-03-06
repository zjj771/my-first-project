#include<stdio.h>
int main(){
	int k,n=0,s=1,c=0;
	scanf("%d",&k);
	for(int i=1;i<=k;i++){
		c++;
		n+=s;
		if(c==s){
			c=0;
			s++;
		}
	}
	printf("%d",n);
	return 0;
}
