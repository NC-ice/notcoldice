#include<stdio.h>
/**
 * 计算分数序列前N项和的主函数
 * 该函数计算形如 2/1 + 3/2 + 5/3 + 8/5 + 13/8 + ... 的分数序列前N项的和
 * 分子分母遵循斐波那契数列规律，其中分子从2开始，分母从1开始
 * 
 * @param void 无参数
 * @return int 返回程序执行状态，0表示正常结束
 */
int main(void)
{
    /* 初始化变量：fenzi为分子(初始为2)，fenmu为分母(初始为1)，
       N为项数，sum为累加和(初始为0)，mid为中间变量 */
    double fenzi=2,fenmu=1,N,sum=0,mid;
    scanf("%lf",&N);
    
    /* 循环计算前N项分数的和，并更新分子分母为下一项的值 */
    for(int i=0;i<N;i++){
        sum=sum+fenzi/fenmu;
        mid=fenmu;
        fenmu=fenzi;
        fenzi=fenzi+mid;
    }
    
    /* 输出结果，保留两位小数 */
    printf("%.2lf",sum);
}