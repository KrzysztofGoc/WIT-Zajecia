#include<stdio.h>
#include<stdlib.h>
/************************************************************************/
/************************************************************************/
int MyRead();
void MySwap(int*, int*);
/************************************************************************/
/************************************************************************/
int MyRead(){
    int x;
    printf("x ?=");
    scanf("%d", &x);
    return x;
    }
/************************************************************************/
void MySwap(int* a, int* b){
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
    }
/************************************************************************/
/************************************************************************/
int main(){
    int x, y;

    x=MyRead();
    y=MyRead();

    printf("x = %2d, y= %2d\n",x,y);
    MySwap(&x,&y);
    printf("x = %2d, y= %2d\n",x,y);



    return 0;
    }
