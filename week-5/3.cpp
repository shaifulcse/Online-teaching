/*
Reverse a number without leading zeros.
*/
#include<stdio.h>

int main()
{
    int remainder, track=0, n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){

        remainder=n%10;
        n=n/10;
        if (remainder==0 && track==0){
            continue;
        }
        track=1;
        printf("%d", remainder);
    }
	return 0;

}

