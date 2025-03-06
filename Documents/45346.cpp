#include<stdio.h>
int main(){
int n,k,s=0,m=0;
    scanf("%d %d",&n,&k);
    int a[2000005];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
    if(a[j]>a[j+1]){
       int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
    }
}
for(int i=0;i<n;i++)
    {
        s+=a[i];
if(s>k){
    break;
}    
    m++;
}
printf("%d",m);
return 0;
}
