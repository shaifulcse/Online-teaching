/*
Finding nth fibonacci number
*/
#include<stdio.h>

int main()
{
    int f1=1,f2=1,f3, i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<=2){
        printf("1");
    }
    else{
        for(i=3;i<=n;i++){
            f3=f1+f2;
            f1=f2;
            f2=f3;
        }
        printf("%d",f3);
    }

	return 0;

}

