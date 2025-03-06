#include<stdio.h>
int main()
{
    int i,j,n,t;
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0||n==1){
        printf("No");
        return 0;
    }
    
    }
    printf("Yes");        
    return 0;
}