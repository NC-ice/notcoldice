#include<stdio.h>
#include<math.h>
/**
 * @brief 计算特定级数的和直到满足精度要求
 * 
 * 该程序计算级数 1 - 1/4 + 1/7 - 1/10 + 1/13 - ... 的和，
 * 直到某一项的绝对值小于给定的精度eps为止。
 * 
 * @param void 无参数
 * @return int 返回0表示程序正常结束
 */
int main(void)
{
    /* 变量声明和初始化 */
    double a,eps,fenmu=1,sum=0;
    double flag=1;
    
    /* 读取用户输入的精度要求 */
    scanf("%lf",&eps);
    
    /* 循环计算级数各项并累加，直到满足精度要求 */
    do{
        a=1/fenmu*flag;
        sum=sum+a;
        fenmu=fenmu+3;
        flag=-flag;
      }while(1/fenmu>=eps);
    
    /* 输出计算结果，保留6位小数 */
    printf("sum = %.6lf",sum);
}