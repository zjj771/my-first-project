#include<stdio.h>
int main(){
    int i=1;
     int  n=1;
     long  s=0;

    while(i<=20){
        n*=i;
        s+=n;
        i++;
    }
    printf("%lu",s);
    return 0;
}
    
    
    
    
    
