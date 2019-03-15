/*
Counting individual numbers
*/

#include<stdio.h>

int main(){
    int n, a[20], count[20], i, number;
    printf("How many numbers?: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        count[i]=0;
    }

    for(i=0;i<n;i++){
        number=a[i];
        count[number]++;
    }

    for(i=0;i<n;i++){
        if(count[i]>0){
            printf("%d = %d\n",i,count[i]);
        }
    }
    return 0;

}

