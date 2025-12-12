#include<stdio.h>
/**
 * 计算自然常数e的近似值
 * 该程序通过计算1 + 1/1! + 1/2! + 1/3! + ... + 1/n!来逼近e的值
 * 参数: 无
 * 返回值: int - 程序执行状态，0表示正常结束
 */
int main(void)
{
    // 初始化变量：n为输入的项数，item用于计算阶乘，sum为累加和
    double n,item=1;
    double sum=1;
    
    // 读取用户输入的项数n
    scanf("%lf",&n);
    
    // 循环计算每一项的值并累加到sum中
    for(int i=1;i<=n;i++){
        // 计算i的阶乘
        for(int j=1;j<=i;j++){
            item=item*j;
        }
        // 将当前项的倒数加到总和中
        sum=sum+1/item;
        // 重置item为1，用于下一次阶乘计算
        item=1;
    }
    
    // 输出计算结果，保留8位小数
    printf("%.8lf",sum);
}