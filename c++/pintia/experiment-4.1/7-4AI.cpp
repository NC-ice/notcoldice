#include <stdio.h>
#include <math.h>

int main(void)
{
    int M, N;

    // 输入校验：确保正确读取两个整数
    if (scanf("%d %d", &M, &N) != 2) {
        printf("输入格式错误\n");
        return 1;
    }

    // 确保 M <= N
    if (M > N) {
        printf("0 0\n");
        return 0;
    }

    int count2 = 0;  // 统计质数个数
    int sum = 0;     // 累加质数之和

    for (int i = M; i <= N; i++) {
        // 1 不是质数
        if (i < 2) continue;

        int is_prime = 1;  // 标记是否为质数，默认是

        // 判断是否为质数：只需查找到 sqrt(i)
        for (int j = 2; j <= (int)sqrt(i); j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            count2++;
            sum += i;
        }
    }

    // 输出结果
    printf("%d %d\n", count2, sum);

    return 0;
}
//判断素数，只需查找到sqrt（i），从2到sqrt（i）只要找到一个因数，就可以中断循环，判断为非素数