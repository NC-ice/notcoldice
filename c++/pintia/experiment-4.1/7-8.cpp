#include<stdio.h>
/**
 * 主函数，实现一个猜数字游戏
 * 
 * 游戏规则：
 * - 程序预先设定一个目标数字和最大猜测次数N
 * - 用户输入猜测的数字，程序会提示太大或太小
 * - 当用户猜中数字或达到最大猜测次数时游戏结束
 * 
 * 参数：无
 * 
 * 返回值：int类型，程序执行状态，正常退出返回0
 */
int main(void)
{
    // 声明变量：目标数字、最大猜测次数、当前猜测次数、用户输入的猜测数字
    int number,N,count=1,a;
    
    // 读取目标数字和最大猜测次数
    scanf("%d %d",&number,&N);
    
    // 读取第一次猜测的数字
    scanf("%d",&a);
    
    // 循环处理用户的猜测，直到猜中或游戏结束
    while(a!=number){
        
        // 检查是否输入了负数，如果是则直接结束游戏
        if(a<0){
            printf("Game Over");
            return 0;
        }
        
        // 根据猜测数字与目标数字的大小关系给出提示
        if(a<number){
            printf("Too small\n");
        }else{
            printf("Too big\n");
        }
        
        // 检查是否达到最大猜测次数，如果是则结束游戏
        if(count==N){
            printf("Game Over");
            return 0;
        }
        
        // 增加猜测次数并读取下一次猜测的数字
        count++;
        scanf("%d",&a);
    }
    
    // 根据猜测次数输出不同的胜利提示信息
    if(count==1){
        printf("Bingo!");
    }else if(count<=3){
        printf("Lucky You!");
    }else{
        printf("Good Guess!");
    }
    return 0;
}