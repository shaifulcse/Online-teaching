/*
Print all the prime numbers up to n
sample input:
n=20
sample output:
2 3 5 7 11 13 17 19
*/
#include<stdio.h>
#include<math.h>
int main(){
    int i,j,n,track;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        track=0;
        for(j=2;j<=sqrt(i);j++){

            if(i%j==0){
                track=1;
                break;
            }
        }
        if(track==0){
            printf("%d ",i);
        }
    }
    return 0;
}

