#include<stdio.h>
/**
 * @brief 主函数，用于打印字母序列
 * @param void 无参数
 * @return int 返回程序执行状态
 * 
 * 该函数读取一个整数n，然后打印从'A'开始的n个字母，
 * 当打印完一轮后减少n的值并重新开始打印，直到n为0
 */
int main(void)
{
    int n;
    char c='A';
    scanf("%d",&n);
    
    // 循环打印字母序列，每次打印完一轮后减少n的值并重新开始
    for(int i=1;i<=n;i++){
        printf("%c ",c);
        c=c+1;
        // 当完成一轮打印时，换行并准备下一轮打印
        if(i==n){
            printf("\n");
            n=n-1;
            i=0;
        }
    }
    
}