/* for n=5
output: 1 3 6 10 15

Don't worry if you could not solve it yet. 

*/
#include<stdio.h>
int main(){
    int i, n, sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum=sum+i;
        printf("%d ",sum);
    }

    return 0;
}

