/*
Decimal to binary conversion
*/

#include<stdio.h>

int main(){

    int i, n,remainder,a[100], index=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(n!=0){
        remainder=n%2;
        a[index]=remainder;
        index++;
        n=n/2;
    }

        for(i=index-1; i>=0; i--){
            printf("%d",a[i]);
        }
}

