/* for n=5
output: 0 1 4 9 16 25
*/
#include<stdio.h>
int main(){
    int i, n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("%d ",i*i);
    }

    return 0;
}

