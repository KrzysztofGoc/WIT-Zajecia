#include <stdio.h>
#include <stdlib.h>
/**********************************************************************/
/**********************************************************************/
typedef struct MyL{
    int x;
    struct MyL* next;
    }MyList;
/**********************************************************************/
/**********************************************************************/


/**********************************************************************/
/**********************************************************************/
int MyRead(char*);
/*******************************************************************************/
/*******************************************************************************/


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
    MyList mL00, mL01, mL02, mL03, mL04;
    MyList * myHead;

    myHead = &mL00;
    mL00.next = &mL01;
    mL01.next = &mL02;
    mL02.next = &mL03;
    mL03.next = &mL04;
    mL04.next = NULL;

    mL00.x = 0;
    mL01.x = 1;
    mL02.x = 2;
    mL03.x = 3;
    mL04.x = 4;

    (*myHead).x = 0;
    myHead->x = 0;

    return 0;
    }














