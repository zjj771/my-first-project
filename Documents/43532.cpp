#include<stdio.h>

int main() {
    int i, j;
    int a[3][3];

    // 读取二维数组元素
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // 进行数组转置
    int temp;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (j<i) {
                temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
    }

    // 输出转置后的数组
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
