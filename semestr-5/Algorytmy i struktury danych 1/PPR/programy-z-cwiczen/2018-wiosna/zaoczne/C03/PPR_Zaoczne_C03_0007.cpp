#include <iostream>
using namespace std;
///*******************************************************************************
///*******************************************************************************
int MyRead(int);
///*******************************************************************************
///*******************************************************************************
int MyRead(int i){
    int x;
    cout<<"x"<<i<<" ?=";
    cin>>x;

    return x;
    }
///*******************************************************************************
///*******************************************************************************
int main(){
    int* * myT;
    unsigned sT2 =2, sT1 =4;
    int *t0, *t1, *t2, *t3;

    myT=new int*[sT1];

    t0= new int[sT2];
    t1= new int[sT2];
    t2= new int[sT2];
    t3= new int[sT2];


    myT[0]= t0;
    myT[1]= t1;
    myT[2]= t2;
    myT[3]= t3;



    return 0;
    }
