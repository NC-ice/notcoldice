#include<stdio.h>
/**
 * 主函数
 * 功能：计算输入整数的位数和各位数字之和
 * 参数：无
 * 返回值：int类型，程序执行状态
 */
int main(void){
    int N,number=0,length=0,sum=0;
    scanf("%d",&N);
    number=N;
    
    // 处理负数情况，取绝对值进行计算
    if(number<0){
        number=-number;
    }
    
    // 计算数字的位数和各位数字之和
    do{
        length++;
        sum =sum+number%10;
        number=number/10;
    }while(number!=0);
    
    // 输出结果：位数和各位数字之和
    printf("%d %d",length,sum);
}
//可以直接对N进行操作