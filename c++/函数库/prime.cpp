#include<stdio.h>
#include<math.h>
/**
 * 判断一个数是否为素数
 * @param n 待判断的整数
 * @return 1表示是素数，0表示不是素数
 */
int prime(int n)
{
    // 处理小于等于1的情况，都不是素数
    if(n<=1){
        return 0;
    // 2是素数
    }else if(n==2){
        return 1;
    }else{
        // 只需要检查到sqrt(n)即可，如果n有大于sqrt(n)的因子，
        // 那么必然有一个小于sqrt(n)的对应因子
        int limit=sqrt(n)+1;
        for(int i=2;i<limit;i++){
            // 如果找到一个因子，则不是素数
            if(n%i==0){
                return 0;
            }
        }
        // 没有找到因子，是素数
        return 1;
    }
}