#include <stdio.h>
#include <stdlib.h>

int main(){
    int * myT;
    int sizeT;
    int i;
    int imax;

    /**  2, 3, 4
         size ?= 3
         T[0] ?= 5
         T[1] ?= 2
         T[2] ?= 5
         ****************
         T[0] = 5
         T[1] = 6
         T[2] = 1

         Max[2] = 5
    */
    printf("size ?=");
    scanf("%d", &sizeT);

    myT = (int*)malloc(sizeof(int)*sizeT);

    for(i = 0; i<sizeT; ++i){
        printf("T[%2d] ?=", i);
        scanf("%d", &myT[i]);/** scanf("%d", myT+i);      */
        }
    printf("*****************************\n");
    for(i = 0; i<sizeT; ++i){
        printf("T[%2d] = %2d\n", i, myT[i]);
        }
    imax = 0;

    for(i = 1; i<sizeT; ++i){
        if(myT[i]>= myT[imax]) imax =i;
        }
    printf("Max[%d] = %d\n", imax, myT[imax]);


    return 0;
    }
