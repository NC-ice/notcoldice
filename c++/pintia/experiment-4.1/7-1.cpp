#include<stdio.h>
/**
 * 主函数
 * 功能：读取一系列正整数，计算其中所有奇数的和，直到遇到非正数为止
 * 参数：无
 * 返回值：0 - 程序正常退出
 */
int main(void)
{
    int N,sum=0;
    
    // 循环读取输入数据，最多读取9999个数
    for(int i=1;i<10000;i++){
        scanf("%d",&N);
        // 遇到非正数则停止读取
        if(N<=0){
        break;
        // 如果是奇数，则累加到sum中
        }else if(N%2==1){
            sum=sum+N;
        }
        
    }
    
    // 输出所有奇数的和
    printf("%d",sum);
    return 0;
}