#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // 读取输入的正奇数n

    int mid = (n + 1) / 2;  // 计算上半部分的行数（包括中间行）

    // 打印上半部分（从顶部到中间行）
    for (int i = 1; i <= mid; i++) {
        // 打印前导空格：每行空格数量为 mid - i，每个空格单元为两个空格字符以确保对齐
        for (int j = 1; j <= mid - i; j++) {
            printf("  ");  // 打印两个空格字符
        }
        // 打印星号：每行星号数量为 2*i - 1，每个星号后跟一个空格
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }
        printf("\n");  // 换行
    }

    // 打印下半部分（从中间行之后到底部）
    for (int i = 1; i <= mid - 1; i++) {
        // 打印前导空格：每行空格数量为 i，每个空格单元为两个空格字符
        for (int j = 1; j <= i; j++) {
            printf("  ");  // 打印两个空格字符
        }
        // 打印星号：每行星号数量为 2*(mid - i) - 1，每个星号后跟一个空格
        for (int k = 1; k <= 2 * (mid - i) - 1; k++) {
            printf("* ");
        }
        printf("\n");  // 换行
    }

    return 0;
}