/*
sample:
n=5

    1
   131
  13531
 1357531
135797531

*/

#include<stdio.h>

int main()
{
    int i,j,k,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
          for(j=1;j<=n-i;j++){
            printf(" ");
          }
          for(j=1;j<=(2*i)-1;j+=2){
            printf("%d",j);
          }

          for(k=j-4;k>=1;k-=2){
            printf("%d",k);
          }
          printf("\n");
    }

	return 0;

}

