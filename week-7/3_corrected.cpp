/*
Find if the second string is a substring of the
first string.
*/

#include<stdio.h>
#include<string.h>

int main(){
    int i,j, decision=1, start, track, len1, len2;
    char ch1[100],ch2[100],c;
    printf("Enter the first string:\n");
    scanf("%[^\n]",ch1);
    scanf("%c",&c);
    printf("Enter the second string:\n");
    scanf("%[^\n]",ch2);

    len1=strlen(ch1);
    len2=strlen(ch2);

    for(i=0;i<len1;i++){
        start=i;
        if(len1-start<len2){
            decision=1;
            break;
        }
        track=0;
        for(j=0;j<len2;j++){
            if(ch1[start]!=ch2[j]){
                track=1;
                break;
            }
            start++;
        }
        if(track==0){
            decision=0;
            break;
        }
    }

    if(decision==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}

