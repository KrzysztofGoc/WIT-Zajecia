#include <stdio.h>
#include <stdlib.h>
/**************************************************************************************/
typedef struct MyL{
    int x;
    struct MyL* next;
    }MyList;
/**************************************************************************************/
/**************************************************************************************/

/**************************************************************************************/
/**************************************************************************************/


/**************************************************************************************/
/**************************************************************************************/
int main(){
    MyList mL00;
    MyList mL01;
    MyList mL02;
    MyList mL03;
    MyList mL04;

    mL00.x = 0;
    mL00.next = NULL;

    mL00.next = &mL01;

    mL01.x = 1;
    mL01.next = NULL;
    mL01.next = &mL02;

    mL02.x = 2;
    mL02.next = NULL;

    mL02.next = &mL03;


    mL03.x = 3;
    mL03.next = NULL;

    mL03.next = &mL04;


    mL04.x = 4;
    mL04.next = NULL;



    printf("mL00.x = %d\n", mL00.x);
    printf("mL01.x = %d\n", mL01.x);
    printf("mL02.x = %d\n", mL02.x);
    printf("mL04.x = %d\n", mL03.x);
    printf("mL05.x = %d\n", mL04.x);

    return 0;
    }
