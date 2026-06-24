#include <stdio.h>
#define MAXN 10

void sort( int a[], int n );

int main()
{
    int i, n;
    int a[MAXN];
    
    scanf("%d", &n);
    for( i=0; i<n; i++ )
        scanf("%d", &a[i]);

    sort(a, n);

    printf("After sorted the array is:");
    for( i = 0; i < n; i++ )
        printf(" %d", a[i]);
    printf("\n");
        
    return 0;
}

/* 你的代码将被嵌在这里 */

/**
 * @brief 使用选择排序算法对整型数组进行升序排序
 * @param a 待排序的整型数组
 * @param n 数组中元素的个数
 * @return 无返回值
 */
void sort( int a[], int n )
{
    int min,k;
    int i,j;
    // 外层循环控制排序轮数，每轮确定一个最小值放到正确位置
    for(i=0;i<n-1;i++){
        min=a[i];
        k=i;
        // 内层循环在未排序部分中寻找最小值及其位置
        for(j=i+1;j<n;j++){
            if(min>a[j]){
                min=a[j];
                k=j;
            }
        }
        // 将找到的最小值与当前轮次的第一个元素交换位置
        a[k]=a[i];
        a[i]=min;
    }
    
}