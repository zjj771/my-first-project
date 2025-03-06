#include<stdio.h>

int main() {
    int i, j;
    int a[4][4];
    int b[4][4];
    // 读取二维数组元素
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // 进行数组转置
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
                b[j][i]=a[i][j];
                
        }
    }

    // 输出转置后的数组
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
