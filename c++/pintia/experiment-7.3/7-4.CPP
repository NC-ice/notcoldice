#include<stdio.h>
int main(void)
{
    char ABC[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char line[80];
    int i=0;
    while((line[i]=getchar())!='\n'){
        i++;
    }
    line[i]='\0';
    i=0;
    while(line[i]!='\0'){
        for(int j=0;j<26;j++){
            if(ABC[j]==line[i]){
                line[i]=ABC[26-j];
            }
        }
        i++;
    }
    i=0;
    while(line[i]!='\0'){
        printf("%c",line[i]);
        i++;
    }
    
}