#include<stdio.h>
#include<math.h>
/**
 * 主函数
 * 功能：查找并输出N位数中的所有阿姆斯特朗数（水仙花数）
 * 参数：无
 * 返回值：int类型，程序退出状态码，0表示正常退出
 */
int main(void)
{
    /* 声明变量：N表示数字位数，sum用于存储各位数字的N次幂之和，num用于临时存储当前处理的数字 */
    int N,sum=0,num;
    /* 读取用户输入的数字位数N */
    scanf("%d",&N);
    /* 遍历所有N位数，从10^(N-1)到10^N-1 */
    for(int i=pow(10,N-1);i<=pow(10,N)-1;i++){
        num=i;
        /* 计算当前数字各位上的数字的N次幂之和 */
        for(int j=1;j<=N;j++){
            sum=pow(num%10,N)+sum;
            num=num/10;
        }
        /* 判断是否为阿姆斯特朗数，如果是则输出 */
        if(sum==i){
            printf("%d\n",i);
        }
        /* 重置sum为0，为下一次循环做准备 */
        sum=0;
    }
}