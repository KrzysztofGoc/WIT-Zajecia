#include<stdio.h>
/******************************************************************************/
/******************************************************************************/
typedef void (*ptrMyText)();
/******************************************************************************/
/******************************************************************************/
void MyText();
void MyText1();
void MyText2();
/******************************************************************************/
/******************************************************************************/
void MyText(){
    printf("\n\n************* MyText ***********\n");
    printf("******************    ");
    MyText1();
    printf("******************    ");
    MyText2();
    }
/******************************************************************************/
void MyText1(){
    printf("---------> MyText1\n");
    }
/******************************************************************************/
void MyText2(){
    printf(">>>>>>>>>> MyText2\n");
    }
/******************************************************************************/
/******************************************************************************/
int main(){
    MyText1();
    MyText2();
    MyText();

    printf("MyText  -> %d\n",MyText);
    printf("MyText1 -> %d\n",MyText1);
    printf("MyText2 -> %d\n",MyText2);

    return 0;
    }
