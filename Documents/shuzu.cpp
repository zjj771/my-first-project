#include<stdio.h>

int main() {
    int i, j;
    int a[4][4];
    int b[4][4];
    // ��ȡ��ά����Ԫ��
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // ��������ת��
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
                b[j][i]=a[i][j];
                
        }
    }

    // ���ת�ú������
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
