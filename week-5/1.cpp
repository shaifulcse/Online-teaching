/*
Find factorial of a number
*/

#include<stdio.h>

int main()
{
    int fact=1,i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        fact*=i;
    }

    printf("The factorial of %d is %d",n,fact);
	return 0;

}

