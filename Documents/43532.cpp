#include<stdio.h>

int main() {
    int i, j;
    int a[3][3];

    // ��ȡ��ά����Ԫ��
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // ��������ת��
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

    // ���ת�ú������
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
