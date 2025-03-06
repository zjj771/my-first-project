#include<stdio.h>
int main(){
	double x,y;
	scanf("%lf",&x);
	if(x<=-10){
		y=6*x-1;
	}else if(x>-2&&x<=10){
		y=x*(x+2);
	}else if(x>10){
		y=2*x/10;
	}
	printf("%lf",y);
	return 0;	
}
