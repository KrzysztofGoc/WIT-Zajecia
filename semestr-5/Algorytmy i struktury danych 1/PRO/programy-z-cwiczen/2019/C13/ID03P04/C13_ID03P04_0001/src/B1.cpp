#include "B1.h"
///******************************************************
B1::B1(int ax, int x):A(ax),x(x){cout<<"\tKonstruktor B1"<<endl;}
///******************************************************
int B1::GetX(char c){
    if('A'==c) return A::GetX();
    return x;
    }
///******************************************************
string B1::ToString(){
    return A::ToString()+ ", B1::x = "+to_string(x);
    }
///******************************************************
