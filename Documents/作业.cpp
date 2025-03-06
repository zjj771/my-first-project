#include<stdio.h>
int main(){
	int N,M,s=0,h,n=0;
	scanf("%d %d",&N,&M);
	int arr[N];
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<N;i++){
	if(arr[i]>h){
		s+=arr[i];
		n++;
	}else{
		continue;
	}
	}
	h=(s-M)/n;
	printf("%d",h);
	
	return 0;	
}
