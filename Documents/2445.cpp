#include<stdio.h>
int main()
{
    int i=1;
    long long n=1;
    long long s=0;
    while(i<=20)
    {  
        n*=i;
        s+=n;
        i++;
    }
    printf("%lld",s);
    return 0;
}
    
    
    
    
    
