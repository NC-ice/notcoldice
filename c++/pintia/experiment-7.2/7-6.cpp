#include<stdio.h>
int main(void)
{
    int m,n;
    scanf("%d %d",&m,&n);
    int A[n][n+n];
    for(int i=0;i<n;i++){
        for(int j=n;j<n+n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            A[i][j]=A[i][j+n];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=n-m;j<n+n-m;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}