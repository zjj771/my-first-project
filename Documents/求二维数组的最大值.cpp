#include<stdio.h>
int main(){
	int i,j;
	int a[3][2];
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}	
	}
		for(i=0;i<3;i++){
			for(j=0;j<2;j++){
				printf("%d\t",a[i][j]);
			}	
			printf("\n");
		}
	int max=0;
	int n=0,m=0;
		for(i=0;i<3;i++){
			for(j=0;j<2;j++){
				if(max<a[i][j]){
					max=a[i][j];
					n=i;
					m=j;	
				}
			}	
		}
	printf("%d %d %d",max,n,m);
    return 0;
	
}
