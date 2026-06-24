#include<stdio.h>
int factorial(int n); 
/**
 * 主函数
 * 程序入口点，读取用户输入的整数，计算并输出其阶乘值
 * 
 * @param void 无参数
 * @return int 返回程序执行状态，0表示正常退出
 */
int main(void)
{
	 /* 声明变量n用于存储用户输入的整数 */
	 int n;
	 /* 从标准输入读取一个整数并存储到变量n中 */
	 scanf("%d",&n); 
	 /* 计算n的阶乘并输出结果 */
	 printf("%d\n",factorial(n));
	 /* 程序正常退出 */
	 return 0; 
}

int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	
	return fact;
}