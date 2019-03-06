/*
Finding nth fibonacci number
*/
#include<stdio.h>

int main()
{
    int f1=1,f2=0,f3, i,n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        f3=f1+f2;
        f1=f2;
        f2=f3;
     }
     printf("%d",f3);


	return 0;

}

