#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;
using std::istream;
///*****************************************************************************************************
///*****************************************************************************************************
class MyA{
    public:
        MyA(int=0, int=0, int=0);
        MyA& MyAIni(int=0, int=0, int=0);
        MyA operator+(const MyA&);
        MyA operator+(int);
        MyA& operator++();
        MyA operator++(int);

        int GetX2();
        int GetX1();
        int GetX0();
        int GetCrC();

        int SetX2(int);
        int SetX1(int);
        int SetX0(int);

    private:
        int CrC();
        int SetCrC();

        int x2;
        int x1;
        int x0;

        int cRc;
    };
///*****************************************************************************************************
///*****************************************************************************************************
MyA operator+(int, MyA&);
ostream& operator<<(ostream&, MyA&);
istream& operator>>(istream&, MyA&);
///*****************************************************************************************************
int MyRead(string);
int MyRead();
///*****************************************************************************************************
///*****************************************************************************************************
MyA operator+(int x,  MyA& myA){
    return myA + x;
    }

///*****************************************************************************************************
///*****************************************************************************************************
MyA::MyA(int x2, int x1, int x0){
    MyAIni(x2, x1, x0);
    }
///*****************************************************************************************************
MyA& MyA::MyAIni(int x2, int x1, int x0){
    this->x2 = x2;
    this->x1 = x1;
    this->x0 = x0;
    SetCrC();
    return *this;
    }
///*****************************************************************************************************
MyA MyA::operator+(const MyA& myA){
    return MyA(this->x2 + myA.x2, this->x1 + myA.x1,this->x0 + myA.x0);
    }
///*****************************************************************************************************
MyA MyA::operator+(int x){
    return MyA(this->x2 + x, this->x1 + x,this->x0 + x);
    }
///*****************************************************************************************************
MyA& MyA::operator++(){
    ++x2;
    ++x1;
    ++x0;
    SetCrC();
    return  *this;
    }
///*****************************************************************************************************
MyA MyA::operator++(int){
    MyA myA(x2,x1,x0);
    ++x2;
    ++x1;
    ++x0;
    SetCrC();
    return  myA;
    }
///*****************************************************************************************************
int MyA::GetX2(){return x2;}
int MyA::GetX1(){return x1;}
int MyA::GetX0(){return x0;}
int MyA::GetCrC(){return cRc;}
///*****************************************************************************************************
int MyA::SetX2(int x){
    int tmp = x2;
    x2 = x;
    SetCrC();
    return tmp;
    }
///*****************************************************************************************************
int MyA::SetX1(int x){
    int tmp = x1;
    x1 = x;
    SetCrC();
    return tmp;
    }
///*****************************************************************************************************
int MyA::SetX0(int x){
    int tmp = x0;
    x0 = x;
    SetCrC();
    return tmp;
    }
///*****************************************************************************************************
int MyA::CrC(){
    return 4*(x2%2) +2*(x1%2) + x0%2;
    }
///*****************************************************************************************************
int MyA::SetCrC(){
    cRc = CrC();
    return cRc;
    }
///*****************************************************************************************************
ostream& operator<<(ostream& s, MyA& myA){
    s<<"( "<<myA.GetX2()<<", "<<myA.GetX1()<<", "<<myA.GetX0();
    s<<") -> "<<myA.GetCrC();
    return s;
    }
///*****************************************************************************************************
istream& operator>>(istream& s, MyA& myA){
    int x;
    cout<<"x2? = ";
    s>>x;
    myA.SetX2(x);
    cout<<"x1? = ";
    s>>x;
    myA.SetX1(x);
    cout<<"x0? = ";
    s>>x;
    myA.SetX0(x);

    return s;
    }
///*****************************************************************************************************
///*****************************************************************************************************
int MyRead(string myStr){
    int x;
    cout<<myStr;
    cin>>x;
    return x;
    }
///*****************************************************************************************************
int MyRead(){
    return MyRead("x? = ");
    }
///*****************************************************************************************************
///*****************************************************************************************************
int main(){
    MyA myB(1,2,3);

    cout<<myB<<endl;
    cin>>myB;
    cout<<myB<<endl;
    return 0;
    }









