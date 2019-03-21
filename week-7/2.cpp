/*
Dan Brown code problem 2
*/

#include<stdio.h>
#include<string.h>

int main(){
    int found,len, i,j;
    char ch[100];
    char part1[14]="ABCDEFGHIJKLM";
    char part2[14]="NOPQRSTUVWXYZ";
    printf("Enter the hidden message:\n");
    scanf("%[^\n]",ch);
    len=strlen(ch);

    for(i=0;i<len;i++){
        if(ch[i]==' '){
            printf(" ");
        }
        else{
            found=0;
            for(j=0;j<13;j++){
                if(ch[i]==part1[j]){
                    found=1;
                    printf("%c",part2[j]);
                    break;

                }
            }

            if(found==0){

                for(j=0;j<13;j++){
                if(ch[i]==part2[j]){
                    found=1;
                    printf("%c",part1[j]);
                    break;

                }
            }
            }
        }
    }

    return 0;
}

