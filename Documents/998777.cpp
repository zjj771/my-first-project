#include<stdio.h>
#include<stdlib.h>
int main(){
    int*p,n,i;
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    int sum=0;
    for(i=0;i<n;i++){
        sum+=p[i];
    }
    int s=sum/n;
    printf("%d",s);
    free(p);
    return 0;
}
