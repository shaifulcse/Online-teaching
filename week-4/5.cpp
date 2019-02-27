/*
sample input:
n=5
sample output:
10305
02040
10305
02040
10305
*/
#include<stdio.h>
#include<math.h>
int main(){
    int i,j,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        for(j=1;j<=n;j++){
            if((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0)){ // or just if((i+j)%2==0)
                printf("%d",j);
            }
            else{
                printf("0");
            }

        }
        printf("\n");
     }
    return 0;
}

