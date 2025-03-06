#include<stdio.h>
int main(){
	double x,y;
	scanf("%lf",&x);
	if(x!=0){
		y=1.0/x;	
	}else {
		y=0;
	}
	printf("%lf",y);
	return 0;
	
}
