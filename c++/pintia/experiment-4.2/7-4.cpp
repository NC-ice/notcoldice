#include<stdio.h>
#include<math.h>
	/**
	 * @brief 主函数，用于将输入的整数按位分离并逐个输出
	 * @param void 无参数
	 * @return int 返回程序执行状态
	 * 
	 * 功能描述：
	 * 1. 读取一个长整型数字
	 * 2. 计算该数字的位数长度
	 * 3. 将数字的每一位从高位到低位依次输出
	 */
		int main(void)
		{
		    long int b,a,n,number,length=0;
		    scanf("%ld",&n);
		    number=n;
		    
		    // 计算输入数字的位数长度
		    do{
		        number=number/10;
		        length++;
		    }while(number!=0);
		    
		    // 从高位到低位依次提取并输出每一位数字
		    for(int i=length;i>=1;i--){
		        a=n/pow(10,i-1);
				a=int(a)%10;
		        printf("%d ",a);
		    }
		}