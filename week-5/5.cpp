/*
GCD and LCM  of two numbers

*/
#include<stdio.h>

int main()
{
    int max, min,x,y, tmp,lcm;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);

    if(x<y){
        min=x;
        max=y;
    }

    else{
        min=y;
        max=x;
    }

    while(min!=0){
        tmp=min;
        min=max%min;
        max=tmp;
    }

    lcm = (x*y)/max;

    printf("GCD is: %d\n", max);
    printf("LCM is: %d", lcm);
	return 0;

}

