#include<stdio.h>
#include<math.h>
/**
 * 主函数
 * 功能：查找并输出形如2^i-1的素数（梅森素数）
 * 参数：无
 * 返回值：int类型，程序执行状态码，0表示正常退出
 */
int main(void)
{
    /* 声明变量：n为输入的上限值，x为当前计算的2^i-1值，count为找到的素数个数 */
    int n,x,count=0;
    /* 读取用户输入的n值 */
    scanf("%d",&n);
    /* 遍历从1到n的每个指数i */
    for(int i=1;i<=n;i++){
        /* 计算2^i-1的值 */
        x=pow(2,i)-1;
        /* 检查x是否为素数：遍历可能的因子j从2到x-1 */
        for(int j=2;j<x;j++){
            /* 如果x能被j整除，则x不是素数，跳出循环 */
            if(x%j==0){
                break;
            }
            /* 如果j已经到达x-1且没有找到因子，则x是素数 */
            if(j==x-1){
                /* 输出找到的素数 */
                printf("%d\n",x);
                /* 素数计数器加1 */
                count++;
            }
        }
    }
    /* 如果没有找到任何素数，则输出"None" */
    if(count==0){
        printf("None");
    }
}