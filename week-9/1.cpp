/*
matrix multiplication
*/

#include<stdio.h>

int main(){
    int a[20][20],b[20][20],c[20][20],i,j,k,sum, row1, col1, row2, col2;
    printf("Number of rows for matrix 1:");
    scanf("%d",&row1);
    printf("Number of columns for matrix 1:");
    scanf("%d",&col1);
    printf("\n\nNumber of rows for matrix 2:");
    scanf("%d",&row2);
    printf("Number of columns for matrix 2:");
    scanf("%d",&col2);
    if(col1!=row2){
        printf("Matrix multiplication is not possible");
    }
    else{
        printf("\nEnter the first matrix (%d*%d)\n",row1,col1);
        for(i=0;i<row1;i++){
            for(j=0;j<col1;j++){
                scanf("%d",&a[i][j]);
            }

        }
        printf("\nEnter the second matrix (%d*%d)\n",row2,col2);

        for(i=0;i<row2;i++){
            for(j=0;j<col2;j++){
                scanf("%d",&b[i][j]);
            }

        }

        //we start the multiplication now
        for(i=0;i<row1;i++){
            for(j=0;j<col2;j++){
                sum=0;
                for(k=0;k<col1;k++){
                    sum+=a[i][k]*b[k][j];
                }
                c[i][j]=sum;
            }

        }

        printf("\nThe first matrix is:\n");

        for(i=0;i<row1;i++){
            for(j=0;j<col1;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }

        printf("\nThe second matrix is:\n");

        for(i=0;i<row2;i++){
            for(j=0;j<col2;j++){
                printf("%d ",b[i][j]);
            }
            printf("\n");

        }

        printf("\nThe result is:\n");

        for(i=0;i<row1;i++){
            for(j=0;j<col2;j++){
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

