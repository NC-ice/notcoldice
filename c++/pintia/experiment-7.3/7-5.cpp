#include<stdio.h>
int main(void)
{
    char line[80];
    int i=0;
    while((line[i]=getchar())!='\n'){
        i++;
    }
    int offset;
    scanf("%d",&offset);
    i=0;
    while(line[i]!='\n'){
        if(line[i]>='A'&&line[i]<='Z'){
            line[i]=line[i]+offset;
            if(!(line[i]>='A'&&line[i]<='Z')){
                if(line[i]>'Z'){
                    line[i]=line[i]-26;
                }else if(line[i]<'A'){
                    line[i]=line[i]+26;
                }
            }
        if(line[i]>='a'&&line[i]<='z'){
            line[i]=line[i]+offset;
            if(!(line[i]>='a'&&line[i]<='z')){
                if(line[i]>'z'){
                    line[i]=line[i]-26;
                }else if(line[i]<'a'){
                    line[i]=line[i]+26;
                }
            }
        }
        i++;
        }
    }
    i=0;
    while(line[i]!='\n'){
        printf("%c",line[i]);
        i++;
    }
}