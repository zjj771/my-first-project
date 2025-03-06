#include<stdio.h>
#include<math.h>

int main() {
    for(int i = 10; i < 30; i++) {
        // 使用%f来打印浮点数
        printf("%.0f\t %.0f\n", pow(i, 3), pow(i, 4));
    }
    return 0;
}
