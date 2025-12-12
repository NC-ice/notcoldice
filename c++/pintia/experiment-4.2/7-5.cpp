#include<stdio.h>
#include<math.h>
double fact(int i);
/**
 * 主函数：计算e^x的近似值
 * 使用泰勒级数展开：e^x = 1 + x/1! + x^2/2! + x^3/3! + ...
 * 当某一项的值小于0.00001时停止计算
 * 
 * @param void 无参数
 * @return int 返回0表示程序正常结束
 */
int main(void)
{
    // 初始化变量：x为输入值，result为累加结果，item1为当前项的值
    double x,result=1,item1=1;
    int i=1;
    
    // 读取用户输入的x值
    scanf("%lf",&x);
    
    // 循环计算泰勒级数的每一项，直到该项小于阈值
    while(item1>=0.00001){
        item1=pow(x,i)/fact(i);
        i++;
        result=result+item1;
    }
    
    // 输出结果，保留4位小数
    printf("%.4lf",result);
}

/**
 * 计算给定整数的阶乘
 * @param i 要计算阶乘的整数
 * @return 返回i的阶乘值，类型为double
 */
double fact(int i)
{
    // 循环计算阶乘：从1乘到i
    double j,item=1;
    for(j=1;j<=i;j++){
        item=item*j;
    }
    return item;
}