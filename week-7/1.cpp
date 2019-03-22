/*
Counting characters
*/

#include<stdio.h>
#include<string.h>

int main(){
    char ch[100];
    int count[123],index, i, len;

    for(i=0;i<123;i++){
        count[i]=0;
    }

    printf("Enter a string:\n");
    scanf("%[^\n]",ch);
    len=strlen(ch);
    for(i=0;i<len;i++){
        index=ch[i];
        count[index]++;
    }

    for(i=0;i<123;i++){
        if(count[i]>0){
            printf("%c=%d",i, count[i]);
            printf("\n");
        }
    }
    return 0;
}

