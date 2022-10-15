#include <stdio.h>
#include <stdlib.h>
/**********************************************************************/
/**********************************************************************/
typedef struct MyN{
    int x;
    struct MyN* next;
    }MyNode;
/**********************************************************************/
/**********************************************************************/
MyNode* PrintMyNode(MyNode*, char*);
/**********************************************************************/
/**********************************************************************/
int MyRead(char*);
/*******************************************************************************/
/**********************************************************************/
MyNode* PrintMyNode(MyNode* myNode, char* myStr){
    if(myNode==NULL) return NULL;
    printf("%s%3d\n",myStr, myNode->x);
    }
/**********************************************************************/
/**********************************************************************/
int MyRead(char* myStr){
    int x;
    printf("%s",myStr);
    scanf("%d", &x);
    return x;
    }
/**********************************************************************/
/**********************************************************************/
int main(){
    MyNode mN0, mN1, mN2, mN3, mN4;

    mN0.x = 0;
    mN1.x = 1;
    mN2.x = 2;
    mN3.x = 3;
    mN4.x = 4;

    mN0.next = NULL;
    mN0.next = &mN1;
    mN1.next = NULL;
    mN1.next = &mN2;
    mN2.next = NULL;
    mN2.next = &mN3;
    mN3.next = NULL;
    mN3.next = &mN4;
    mN4.next = NULL;

    PrintMyNode(&mN0,"x = ");
    PrintMyNode(&mN1,"x = ");
    PrintMyNode(&mN2,"x = ");
    PrintMyNode(&mN3,"x = ");
    PrintMyNode(&mN4,"x = ");


    return 0;
    }














