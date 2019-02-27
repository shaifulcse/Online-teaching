/*
sample input:
n=5
sample output:

2345
345
45
5

*/

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        for(j=i+1;j<=n;j++){
            printf("%d",j);

        }

        printf("\n");

    }
    return 0;
}

