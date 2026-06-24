#include <stdio.h>

int main(void)
{
    // 读取杨辉三角的行数N
    int N;
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("请输入一个正整数。\n");
        return 1;
    }

    // 创建二维数组存储杨辉三角，A[i][j]表示第i行第j列的数值
    int A[N][N];

    // 构造杨辉三角的数值
    for (int i = 0; i < N; i++) {
        // 每行首尾元素设为1
        A[i][0] = A[i][i] = 1;

        // 对于第2行及以后的行，计算中间元素的值
        if (i >= 2) {
            for (int j = 1; j < i; j++) {  // 修改此处上限为 i 避免越界
                A[i][j] = A[i - 1][j] + A[i - 1][j - 1];
            }
        }
    }

    // 格式化输出杨辉三角
    for (int i = 0; i < N; i++) {
        // 打印前导空格，实现居中对齐效果
        for (int j = 1; j < N - i; j++) {
            printf(" ");
        }

        // 打印当前行的所有数字，每个数字占4个字符宽度
        for (int j = 0; j <= i; j++) {
            printf("%4d", A[i][j]);
        }

        // 换行，开始下一行的输出
        printf("\n");
    }

    return 0;
}//主要修改在于22行，我以重复执行首位为一确保不出问题，AI将循环限制在i保证不越界                                           