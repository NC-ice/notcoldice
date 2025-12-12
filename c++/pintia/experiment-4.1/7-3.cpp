#include<stdio.h>
/**
 * @brief 主函数，用于读取n个整数并找出其中的最小值
 * @param void 无参数
 * @return int 返回程序执行状态，0表示正常退出
 */
int main(void)
{
    // 声明变量：n表示数字个数，min表示当前最小值，a用于临时存储输入的数字
    int n,min,a;
    
    // 读取数字个数n和第一个数字a，并将a初始化为最小值
    scanf("%d %d",&n,&a);
    min=a;
    
    // 循环读取剩余的n-1个数字，找出其中的最小值
    for(int i=0;i<n-1;i++){
        scanf("%d",&a);
        if(a<min){
            min=a;
        }
    }
    
    // 输出找到的最小值
    printf("min = %d",min);
}