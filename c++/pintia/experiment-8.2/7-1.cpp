#include<stdio.h>
#include<string.h>
int main(void)
{
    int N;
    scanf("%d",&N);
    char line[N][81];
    getchar();
    for(int i=0;i<N;i++){
        gets(line[i]);
    }
    char min[81];
    strcpy(min,line[0]);
    for(int i=0;i<N;i++){
        if(strcmp(min,line[i])>0)strcpy(min,line[i]);
    }
    printf("Min is: %s",min);
}