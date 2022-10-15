#include<stdio.h>
#include<stdlib.h>
/*********************************************************************/
/*********************************************************************/
typedef int (*ptrMyCom)(int, int);
/*********************************************************************/
/*********************************************************************/
int MyRead();
int MyAdd(int, int);
int MyMul(int, int);
int MyCalc(int, int, ptrMyCom);
int MyCalc2(int, int, int (*myF)(int, int));
/*********************************************************************/
/*********************************************************************/
int MyRead(){
    int x;
    printf("x ?=");
    scanf("%d", &x);

    return x;
    }
/*********************************************************************/
int MyAdd(int x, int y){
    return x+y;
    }
/*********************************************************************/
int MyMul(int x, int y){
    return x*y;
    }
/*********************************************************************/
int MyCalc(int x, int y, ptrMyCom myF){
    return myF(x,y);
    }
/*********************************************************************/
int MyCalc2(int x, int y, int (*myF)(int, int)){
    return myF(x,y);
    }
/*********************************************************************/
/*********************************************************************/
int main(){
    int x, y;
    x = MyRead();
    y = MyRead();
    printf("result = %d\n", MyCalc(x,y,MyAdd));
    printf("result = %d\n", MyCalc2(x,y,MyAdd));

    return 0;
    }










