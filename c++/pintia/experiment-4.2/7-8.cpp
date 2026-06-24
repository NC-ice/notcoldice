#include<stdio.h>

// 函数声明：判断一个数是否为质数
int isPrime(int num) {
    // 处理特殊情况
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    
    // 检查从5到sqrt(num)的所有数
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return 0;
    }
    return 1;
}

int main(void)
{    int N, i;

    scanf("%d", &N);
    
    // 验证输入是否为偶数且大于2
    if (N <= 2 || N % 2 != 0) {
        printf("输入错误！请输入大于2的偶数。\n");
        return 1;
    }
    
    // 查找两个质数，使其和为N
    for (i = 2; i <= N/2; i++) {
        if (isPrime(i) && isPrime(N - i)) {
            printf("%d = %d + %d\n", N, i, N - i);
            break; // 找到第一个解后退出循环
        }
    }
    
    return 0;
}