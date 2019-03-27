
/*
program for finding 
max(x,y)*min(y,z)
with user-defined functions
*/

#include<stdio.h>
int max(int, int);
int min(int, int);


int main(){
 int x,y,z, r1, r2, result;
 printf("Enter values for x,y, and z:");
 scanf("%d%d%d",&x,&y,&z);
 r1=max(x,y);
 r2=min(y,z);
 result=r1*r2;
 /*
 The previous 3 lines can be replaced by
 result = max(x,y)* min(y,z);
 */
 printf("The result is: %d",result);

 return 0;
}

int max(int a, int b){
    if(a>b)
      return a;
    else
      return b;
}
int min(int a, int b){
    if(a<b)
        return a;

    return b;
}

