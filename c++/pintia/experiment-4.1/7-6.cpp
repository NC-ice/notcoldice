#include<stdio.h>
/*
 * 函数功能：统计输入字符串中空格、数字和其他字符的个数
 * 参数说明：无
 * 返回值：int类型，程序执行状态，0表示正常结束
 */
int main(void)
{
    /* 声明变量：ch用于存储输入字符，blank统计空格数，digit统计数字数，other统计其他字符数 */
    int ch,blank=0,digit=0,other=0;
    
    /* 读取第一个字符 */
    ch=getchar();
    
    /* 循环读取字符直到遇到换行符 */
    while(ch!='\n'){
        /* 根据字符类型进行分类统计 */
        switch(ch){
            case ' ':blank++;break;
            case '1':case '2':case '3':case '4':case '5':case '6':case '7':
            case '8':case '9':case '0':digit++;break;
            default:other++;break;
        }
        /* 读取下一个字符 */
        ch=getchar();
    }
    
    /* 输出统计结果 */
    printf("blank = %d, digit = %d, other = %d",blank,digit,other);
    return 0;
}