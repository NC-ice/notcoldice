#include<stdio.h>
int main(void)
{
    char X;
    X=getchar();
    getchar();
    char line[80];
    int k=0;
    while((line[k]=getchar())!='\n'){
        k++;
    }
    line[k]='\0';
    for(int i=k;i>0;i++){
        if(line[i]==X){
            printf("index = %d",i);
            return 0;
        }
    }
    printf("Not Found");
    return 0;
}