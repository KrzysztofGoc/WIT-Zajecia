#include<stdio.h>
#include<stdlib.h>
/*********************************************************************************/
/*********************************************************************************/
typedef void (*ptrMyTex)();
/*********************************************************************************/
/*********************************************************************************/
void MyTextAll();
void MyText01();
void MyText02();
/*********************************************************************************/
/*********************************************************************************/
void MyTextAll(){
    printf("\n**************** MyTextAll ****************\n");
    MyText01();
    MyText02();
    printf("\n*******************************************\n");
    }
/*********************************************************************************/
void MyText01(){
    printf("\nFunction MyText01\n");
    }
/*********************************************************************************/
void MyText02(){
    printf("\n\tFunction MyText02\n");
    }
/*********************************************************************************/
/*********************************************************************************/
int main(){
    MyTextAll();
    MyText01();
    MyText02();

    printf("MyText01 ---->%d\n", MyText01);
    printf("\tMyText02 ---->%d\n", MyText02);
    printf("MyTextAll *****************>%d\n", MyTextAll);


    return 0;
    }

