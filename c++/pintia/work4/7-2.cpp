#include<stdio.h>
void sort( char B[], int n );
int main(void)
{
    char A[81];
    int i = 0, count = 0;
    
    // 添加输入长度检查，防止缓冲区溢出
    while(i < 80 && (A[i] = getchar()) != '\n'){
        if(A[i] == EOF) break;  // 处理EOF情况
        i++;
        count++;
    }
    A[i] = '\0';
    
    char B[count];
    int unique_count = 0;
    
    // 重新设计去重算法
    for(int k = 0; k < count; k++){
        int is_duplicate = 0;
        // 检查当前字符是否已经在B数组中存在
        for(int j = 0; j < unique_count; j++){
            if(B[j] == A[k]){
                is_duplicate = 1;
                break;
            }
        }
        // 如果不是重复字符，则添加到B数组
        if(!is_duplicate){
            B[unique_count] = A[k];
            unique_count++;
        }
    }
    
    sort(B, unique_count);
    for(int i = 0; i < unique_count; i++){
        printf("%c", B[i]);
    }
    
    return 0;
}
void sort( char B[], int n )
{
    int min,k;
    int i,j;
    for(i=0;i<n-1;i++){
        min=B[i];
        k=i;
        for(j=i+1;j<n;j++){
            if(min>B[j]){
                min=B[j];
                k=j;
            }
        }
        B[k]=B[i];
        B[i]=min;
    }
    
}