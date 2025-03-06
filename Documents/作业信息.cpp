#include<stdio.h>
int main(){
	double score[3][5];
	int i,j;
	double n;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			scanf("%lf",&n);
		}
	}
	double a[5];
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			a[j]+=score[j][i];
		}
	}
	for(j=0;j<5;j++){
		printf("第%d门成绩的平均分：%lf\n",j+1,a[j]/3);
	}	
	return 0;	
}
