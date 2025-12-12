#include<stdio.h>

/**
 * @brief 计算球体弹跳距离和最终高度
 * @details 该程序模拟一个球从指定高度自由落下，并计算其在第n次弹跳后的总运动距离和最终反弹高度
 * 假设每次弹跳后球的高度减半，且上升和下降的距离都计入总距离
 * 
 * 输入：初始高度hight0和弹跳次数n
 * 输出：总运动距离和第n次弹跳后的高度
 * 
 * 特殊情况处理：当n=0时，输出"0.0 0.0"
 * 
 * @param void 无参数输入
 * @return int 返回0表示程序正常结束
 */
int main(void)
{
    // 声明变量：初始高度、弹跳次数、总距离、当前高度、上一次弹跳高度
    double hight0,n,hight1,hight2,hight3=0;
    
    // 读取初始高度和弹跳次数
    scanf("%lf %lf",&hight0,&n);
    
    // 初始化各高度变量
    hight1=hight0;
    hight2=hight0;
    
    // 处理特殊情况：无弹跳次数
    if(n==0){
        printf("0.0 0.0");
        return 0;
    }
    
    // 循环计算每次弹跳后的距离和高度
    // hight1: 当前弹跳高度
    // hight2: 累计总运动距离  
    // hight3: 上一次弹跳的高度
    for(int i=1;i<=n;i++){
        hight1=hight1*0.5;           // 每次弹跳高度减半
        hight2=hight2+hight3*2;      // 累加往返距离(上次高度的两倍)
        hight3=hight1;               // 更新上一次弹跳高度
    }
    
    // 输出总运动距离和最终反弹高度，保留一位小数
    printf("%.1f %.1f",hight2,hight1);
}