#include<stdio.h>
int main(){
	int i,j;
	int a[5]={0};
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	int max=a[0],min=a[0];
	int maxtemp=0,mintemp=0;
	for(j=1;j<5;j++){
		if(max<a[j]){
			max=a[j];
			maxtemp=j;
		}
		if(min>a[j]){
			min=a[j];
			mintemp=j;
		}	
	}
	printf("���ֵ��%d�±���%d\n",max,maxtemp);
	printf("��Сֵ��%d�±���%d",min,mintemp);
	return 0;
}
