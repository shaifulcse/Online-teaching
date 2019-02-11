/*
A simple C program for a simple grading system. This  program can be done in many other ways

*/

#include<stdio.h>


int main(){
    int mark;
    printf("Enter your mark: ");
    scanf("%d",&mark);

    if(mark >100 || mark <0){
        printf("Invalid input");
    }
    else{
        if(mark>=80){
            printf("A+");
        }
        else{
            if(mark>=70){
                printf("A");
            }
            else{
                if(mark>=50)
                {
                    printf("B");
                }
                else{
                    if(mark >=33){
                      printf("C");
                    }
                    else{
                      printf("F");
                    }
                }

            }
        }

    }

    return 0;
}

