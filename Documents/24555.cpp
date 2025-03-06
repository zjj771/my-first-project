#include <stdio.h>
#include <string.h>
int main() {
    int i, m = 0, n = 0;
    char str[101];
    scanf("%100s", str);  

    for (i = 0; i <= strlen(str) - 3; i++) {  
        if (str[i] == ':'&& str[i + 1] == '-'&&str[i+2]==')') {
            m++;
            i++; 
        } else if (str[i] == ':' && str[i + 1] == '-'&&str[i+2]=='(') {
            n++;
            i++;  
        }
    }

    if (m == 0 && n == 0) {
        printf("None\n");
    } else if (m > n) {
        printf("Happy\n");
    } else if (m == n) {
        printf("Just so so\n");
    } else {
        printf("Sad\n");
    }

    return 0;
}
