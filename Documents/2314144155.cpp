#include <stdio.h>

#include <stdlib.h>

#define MAXLINE 100

void  encrypt(char *s);
int main()

{

    char line[MAXLINE];

    printf("Input the string:");

    gets(line);

    encrypt(line);

    printf("After being encrypted: ");

    puts(line);

    return 0;

}

void encrypt(char*s)
{
int i;
for(i=0;s[i]!='\0';i++){
	if(s[i]>='a'&&s[i]<'z'){
		s[i]=s[i]+1;
	}else if(s[i]=='z'){
	s[i]='a';	
	}else if(s[i]>='A'&&s[i]<'Z'){
		s[i]=s[i]+1;
	}else if(s[i]=='Z'){
		s[i]='A';
	}
}	
}	
	
	
