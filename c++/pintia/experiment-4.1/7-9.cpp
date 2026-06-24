#include<stdio.h>
/**
 * @brief 主函数，计算达到指定数量所需的月份数
 * @param void 无参数
 * @return int 返回达到目标数量所需的月份数
 */
int main(void){
    // 初始化计数器和月份变量
    // count1, count2, count3 分别代表不同状态的数量统计
    // month 记录当前月份
    int count1=1,count2=0,count3=0,m1,N,month=1;
    scanf("%d",&N);
    
    // 循环计算每个月的变化，直到总数达到或超过目标值N
    while(count1+count2+count3<N){
        month++;
        m1=count2;
        count2=count1;
        count3=count3+m1;
        count1=count3;
    }
    
    // 输出达到目标数量所需的月份数
    printf("%d",month);
}