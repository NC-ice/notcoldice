#include<stdio.h>
#include<string.h>
int main(void)
{
    char line[5][80];
    for(int i=0;i<5;i++){
        scanf("%s",line[i]);
    }
    printf("After sorted:\n");
    char min[80];
    
    //选择排序
    for(int i=0;i<4;i++){
        strcpy(min,line[i]);
        int index=i;
        for(int j=i+1;j<5;j++){
            if(strcmp(min,line[j])>0){
                index=j;
                strcpy(min,line[index]);
            }
        }
        if(i!=index){
            strcpy(line[index],line[i]);
            strcpy(line[i],min);
        }
    }
    for(int i=0;i<5;i++){
        printf("%s\n",line[i]);
    }
}