#include<stdio.h>
int main(){
	int n,i,j,temp;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}	
		}
			
	}
	for(i=0;i<n;i++){
			printf("%d\t",a[i]);	
		}
	return 0;	
}
