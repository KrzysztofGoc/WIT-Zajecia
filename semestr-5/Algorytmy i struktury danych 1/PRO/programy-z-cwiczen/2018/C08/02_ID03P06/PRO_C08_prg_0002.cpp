#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;
using std::istream;
///**************************************************************************************
///**************************************************************************************
class MyApplication{
    public:
        void Main01();
        void Main02();
    };
///**************************************************************************************
///**************************************************************************************
class Candy{
    public:
        Candy(int, int);
        Candy(){cout<<"CANDY"<<endl;}
        int GetSugar();
        int GetFat();
        Candy operator+(const Candy& )const;
    private:
        int sugar;
        int fat;
friend ostream& operator<<(ostream&, const Candy&);
    };
///**************************************************************************************
///**************************************************************************************
class Box{
    public:
        Box(Candy, Candy);
        Box(){cout<<"BOX"<<endl;}
        Candy GetCoco();
        Candy GetSugar();
        Box operator+(const Box& )const;
    private:
        Candy coco;
        Candy sugar;
friend ostream& operator<<(ostream&, const Box&);
    };
///**************************************************************************************
///**************************************************************************************
Candy::Candy(int psugar, int pfat): sugar(psugar), fat(pfat){}
///**************************************************************************************
int Candy::GetSugar(){return sugar;}
///**************************************************************************************
int Candy::GetFat(){return fat;}
///**************************************************************************************
Candy Candy::operator+(const Candy& candy)const{
    return Candy(sugar+candy.sugar, fat + candy.fat);
    }
///**************************************************************************************
ostream& operator<<(ostream& s, const Candy& candy){
    s<<"("<<candy.sugar<<", "<<candy.fat<<")";
    return s;
    }
///**************************************************************************************
///**************************************************************************************
int main(){
    (new MyApplication)->Main02();
    return 0;
    }
///**************************************************************************************
///**************************************************************************************
void MyApplication::Main01(){
    Candy myC01(3,4);
    cout<<myC01<<endl;
    cout<<"sugar = "<<myC01.GetSugar()<<endl;
    cout<<myC01 + myC01<<endl;
    }
///**************************************************************************************
void MyApplication::Main02(){
    Box box;
    }
///**************************************************************************************
