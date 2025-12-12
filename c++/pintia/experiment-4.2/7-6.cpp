#include<stdio.h>
/**
 * 主函数
 * 该程序用于计算特定数学问题的解并输出所有可能的组合
 * 
 * @param void 无参数
 * 
 * @return int 返回0表示程序正常结束
 */
int main(void)
{
    int count = 0;  // 计数器，记录找到的解的数量
    int x;          // 存储用户输入的数值
    scanf("%d", &x);

    x = x - 8;      // 对输入值进行预处理，减去8
    
    // 外层循环：枚举s1的所有可能值（以5为单位）
    // s1的取值范围从x/5到0
    for(int s1 = x / 5; s1 >= 0; s1--)
    {
        // 内层循环：枚举s2的所有可能值（以2为单位）
        // s2的取值范围从(x-s1*5)/2到0
        for(int s2 = (x - s1 * 5) / 2; s2 >= 0; s2--)
        {
            // 计算s3的值（以1为单位）
            int s3 = x - s1 * 5 - s2 * 2;
            
            // 输出当前解的详细信息，包括各部分的值和总和
            printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", 
                   s1 + 1, s2 + 1, s3 + 1, s1 + s2 + s3 + 3);
            count++;  // 增加解的计数
        }
    }
    
    // 输出总共找到的解的数量
    printf("count = %d", count);
    return 0;
}