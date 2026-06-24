#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int A[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    int max,min;
    int J,L,I;
    int foundcount=0;
    
    for(int i=0;i<n;i++){
        max=A[i][0];
        for(int j=0;j<n;j++){
            if(max<A[i][j]){
                max=A[i][j];
                I=i;
                J=j;
            }//找行最大值
        }
        min=A[0][J];
        for(int l=0;l<n;l++){
            if(min>A[l][J]){
                min=A[l][J];
                L=l;
            }
        }//找行最大值的列最小值
        if(min==max){
            printf("%d %d\n",L,J);
            foundcount++;
        }
    }
    if(foundcount==0){
        printf("NONE");
    }
    return 0;
}