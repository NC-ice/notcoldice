#include <stdio.h>
/**
 * @brief 主函数，读取一系列正整数，计算其中所有奇数的和并输出
 * @param void 无参数
 * @return int 返回0表示程序正常结束
 */
int main(void)
{
    // 声明变量：N用于存储输入的数字，sum用于累计奇数和
    int N, sum = 0;
    
    // 循环读取输入直到遇到非正整数或输入错误
    while (1) {
        // 尝试读取一个整数，如果读取失败则退出循环
        if (scanf("%d", &N) != 1) {
            break;
        }
        
        // 如果输入的数字小于等于0，则退出循环
        if (N <= 0) {
            break;
        } else if (N % 2 == 1) {
            // 如果输入的数字是奇数，则将其加到sum中
            sum = sum + N;
        }
    }
    
    // 输出所有奇数的和
    printf("%d", sum);
    return 0;
}
//主要在于循环的使用，while循环减少了不必要的循环