#include<stdio.h>
int main(){
	int a[10]={6,7,9,4,5,3,10,2,0,1};
    int*p;
    int i=0;
	int temp=0;
    p=a;
	for(;p<a+9;p++){
		for(;p<a+9-i;p++){
			if(*p<*(p+1)){
				temp=*p;
				*p=*(p+1);
				*(p+1)=temp;
			}
			i++;	
		}
	}
		
for(i=0;i<9;i++){
	printf("%d",a[i]);
	printf("\n");
}	
return 0;		
}
	
	
	
	
	
