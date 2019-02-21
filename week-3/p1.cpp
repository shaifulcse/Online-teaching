/* 3n+1 problem
*/
#include<stdio.h>
int main(){
    int steps=0, n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=1){
        steps++;
        if(n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }

    }

    printf("Number of steps=%d",steps);
    return 0;
}

