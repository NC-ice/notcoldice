#include<stdio.h>
/**
 * 主函数
 * 功能：找出指定范围内的所有完全数并按格式输出
 * 参数：无
 * 返回值：int类型，程序退出状态
 * 
 * 完全数是指一个正整数等于它的所有真因数（除了自身的约数）之和
 * 例如：6 = 1 + 2 + 3，所以6是完全数
 */
int main(void)
{
    // 声明变量：m和n为范围边界，num1统计因数个数，num2用于输出控制，num3统计完全数个数，sum计算因数和
    int m,n,num1=0,num2=0,num3=0,sum=0;
    
    // 输入范围m和n
    scanf("%d %d",&m,&n);
    
    // 遍历范围[m,n]内的所有数字
    for(int t=m;t<=n;t++){
        // 查找t的所有真因数并计算它们的和
        for(int i=1;i<t;i++){
            if(t%i==0){
                sum=sum+i;
                num1++;
            }
        }
        
        // 判断是否为完全数（数字等于其真因数之和）
        if(t==sum){
            printf("%d =",t);
            num3++;
            // 输出该完全数的所有真因数
            for(int j=1;j<t;j++){
                if(t%j==0){
                    printf(" %d",j);
                    num2++;
                    // 控制输出格式，在因数间添加"+"号
                    if(num2<num1){
                        printf(" +");
                    }else{
                        printf("\n");
                    }
                }
            }
        }
        
        // 重置临时变量，为下一次循环做准备
        sum=0;
        num1=0;
        num2=0;
    }
    
    // 如果在指定范围内没有找到完全数，则输出"None"
    if(num3==0){
        printf("None");
    }
}