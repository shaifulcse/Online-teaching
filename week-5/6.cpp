/*
Checking for perfect square number
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq;
    printf("Enter a number: ");
    scanf("%d",&n);
    sq=sqrt(n);
    if(sq*sq==n){
        printf("It's a perfect square number");
    }
    else{
        printf("It's not a perfect square number");
    }
	return 0;

}

