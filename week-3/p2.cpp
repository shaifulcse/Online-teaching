/* for n=5
output: 0 2 4 6 8 10
*/
#include<stdio.h>
int main(){
    int i, n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("%d ",i*2);
    }

    return 0;
}

